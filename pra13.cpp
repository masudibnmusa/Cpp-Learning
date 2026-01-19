#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int sum = 0;
    for (int i = 1;i<=10;i++){
        sum = sum+i;
        if(i == 5){
            break;
        }
        
    }
    cout << sum ;
    return 0;
}
