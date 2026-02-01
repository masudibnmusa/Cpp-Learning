#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {2,3,6,7,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    return 0;
}