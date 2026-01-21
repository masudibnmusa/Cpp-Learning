#include<iostream>
using namespace std;
int sumofthenumber(int n){
    int sum = 0;
    for(int i=0;i<=n; i++){
       sum = sum+i; 
    }
    return sum ;
}
int main(){
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int result = sumofthenumber(number);
    cout << "The sum of the number is : ";
    cout << result;
    return 0 ;
}