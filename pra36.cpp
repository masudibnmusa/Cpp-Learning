#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int sum = 0;
    while (num !=0)
    {
        sum +=num%10;
        num /= 10;
    }
    return sum ;
    
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number ;
    cout << "The sum of the number is : " << sumOfDigit(number);

    return 0;
}