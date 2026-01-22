#include<iostream>
using namespace std;
void reverseArray(int arr){
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr[n]);
    for(int i=0;i<n;i++){
        cout << arr[i] <<",";
    }
    return 0;
}