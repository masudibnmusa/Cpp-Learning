#include<iostream>
using namespace std;
void calculatePrime(int n){
    bool flag = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag == 0){
        cout << "The number is not a prime number";
    }else{
        cout << "the number is a prime number";
    }
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    calculatePrime(n);
    return 0;
}