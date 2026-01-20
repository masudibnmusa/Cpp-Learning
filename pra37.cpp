#include<iostream>
using namespace std;
int reverseNumber(int num){
    int rev = 0;
    while(num!=0){
        rev=rev*10+(num%10);
        num/=10;
    }
    return rev;
}
int main(){
    int number ;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Reverse of this number is : " << reverseNumber(number);
    return 0;
}