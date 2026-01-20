#include<iostream>
using namespace std;
int main(){
    int n = 4;
    
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=i;j>=0;j--){
            cout << ch << " ";
            ch--;
        }
        cout << "\n";
    }
    return 0;
}