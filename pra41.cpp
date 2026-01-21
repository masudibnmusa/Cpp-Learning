#include<iostream>
using namespace std;
int calculteFactorial(int n){
    int fact =1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int calculateBinominalFact(int n,int r){
    int a = calculteFactorial(n)/(calculteFactorial(r)*calculteFactorial(n-r));
    return a; 
}
int main(){
    int n,r;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Enter the value of r:";
    cin >> r;
    cout << "The binominal factorial is :" << calculateBinominalFact(n,r);
    return 0;
}