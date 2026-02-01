#include<iostream>
using namespace std;
int find_kth_largest(int *arr,int size,int k) {
    for (int i = 0;i<k;i++) {
        for (int j = 0;j<size-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr[size-k];
}
int main(){
    int arr[] = {2,6,4,5,3,8,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout << "The " << k << "no largest element is : " << find_kth_largest(arr, n, k);
    return 0;
}
