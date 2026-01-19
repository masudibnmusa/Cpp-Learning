#include<iostream>
using namespace std;
int main(){
    int age ;
    cout << "Enter your age : ";
    cin >> age ;

    if (age >= 18){
        cout << "Eligible for vote";
    }else{
        cout << "Not eligiable for vote";
    }
    return 0;
}