#include<iostream>
using namespace std;
int sumOfdigit(int n){
    int sum = 0;
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        n = n/10;
        sum +=lastdigit;
    }
    
    return sum;
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "the sum of the number is:" << sumOfdigit(num);
    
    return 0;
}