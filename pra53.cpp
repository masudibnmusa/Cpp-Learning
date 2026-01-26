#include<iostream>
#include<climits>
using namespace std;
void swapingMaxMin(int arr[],int n){
    int minIndex = 0;
    int maxIndex = 0;
    for(int i = 1;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
    }
    cout << "Smallest is :" << minIndex << "\n";
    cout << "Largest is : " << maxIndex << "\n";

    swap(arr[minIndex],arr[maxIndex]);

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    swapingMaxMin(arr,n);

    return 0;
}