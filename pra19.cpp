#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr1[] = {2,5,3,6,8,7,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int key = 6;
    
    sort(arr1,arr1+n);
    for(int i = 0;i<n;i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";

    int l = 0 , r = n-1;
    bool found = false;

    while(l<=r){
        int mid = l + (r-l)/2;

        if (arr1[mid]==key){
            cout << "Element found in position index " << mid;
            found = true;
            break;
        }else if (arr1[mid]< key){
            l = mid +1;
        }else{
            r = mid - 1;
        }
    }
    if (found==0){
        cout << "Element is not found!";
    }

    return 0;
}