//Linear search
#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,7,7,8,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8 ;
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            cout << "Element is found at index number : " << i;
        }
    }
    return 0;
}