#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << ",";
    }
    return 0;
}