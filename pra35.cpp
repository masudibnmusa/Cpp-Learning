#include<iostream>
using namespace std;
int calculateDistance(int distance){
    return distance*12;
}
void prin(){
    cout << "My name is Masud Ibn Musa.\n";
}
int main(){
    prin();
    cout << calculateDistance(12);
    return 0;
}