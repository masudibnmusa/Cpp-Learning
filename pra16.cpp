#include<iostream>
using namespace std;
int main(){
    int n = 5;
    bool isPrime = false;
    for (int i = 2;i<=n-1;i++){
        if(n%i==0){
            cout << n << " is not a prime number";
            isPrime = true;
            break;
        }
    }
    if(isPrime == false){
        cout << n <<" is a prime number";
    }
    return 0;
}