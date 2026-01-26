#include<iostream>
using namespace std;
void printUniq(int arr[],int n){
    for (int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int arr[] = {1,2,2,4,5,6,6,2,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printUniq(arr,n);
    return 0;
}
