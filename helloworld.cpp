#include<iostream>
using namespace std;
int main(){
    cout << "Hello world !"<< endl;
    int a ;
    int b ;
    int c ;
    cout << "Enter the 1st number:";
    cin >> a;
    cout << "Enter the 2nd number:";
    cin >> b;
    cout << "Enter the 3rd number:";
    cin >> c;
    if(a>b && a>c){
        cout << a << " is greater";
    }else if (b>a && b>c){
        cout << b << " is greater";
    }else{
        cout << c << " is greater";
    }

    return 0 ;
}