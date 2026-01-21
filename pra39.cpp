#include<iostream>
using namespace std;
int calculateFactorial(int n){
    int fact = 1 ;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact ;
}
int main(){
    int num;
    cout << "Enter the number";
    cin >> num;
    cout << "The factorial of the number is : " << calculateFactorial(num);
    return 0;
}