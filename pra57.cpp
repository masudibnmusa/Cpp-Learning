#include<iostream>
using namespace std ;
double getMediam(int arr[],int n){
    if(n%2!=0){
        return arr[n/2];
    }else{
        return (arr[n/2-1]+arr[n/2])/2.0;
    }
}
int main(){
    int arr[] = {5,1,9,2,8,3,7,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i<n-1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[minIndex],arr[i]);
        }
        for (int i = 0;i<n-1;i++){
            cout << arr[i] << " ";
        }
        cout << endl ;
    }
    cout << "The median of the array is : " << getMediam(arr,n);
    return 0;
}