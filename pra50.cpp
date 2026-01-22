#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=n-1;i>=0;i++){
        cout << arr[i];
    }
    return 0;
}