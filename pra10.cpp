#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout << "Enter the charecter : ";
    cin >> ch ;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Leter is lower case";
    }else if (ch >= 'A' && ch <= 'Z'){
        cout << "Leter is Upper Case";
    }else{
        cout << "Not a charecter";
    }
    
    return 0;
}