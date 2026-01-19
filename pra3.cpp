#include<iostream>
using namespace std;
int main(){
    cout << "Hello brother !"<< endl;
    string name = "Masud";
    string ans ;
    string q1 = "who is masud";
    cout << "What?\n";
    getline(cin,ans);
    if(ans == q1){
        cout << "As far i know he is pronob's father";
    }else{
        cout << "i dont know";
    }
    return 0;
}