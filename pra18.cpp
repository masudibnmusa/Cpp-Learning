#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,5,6,7,8,9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr1[i] == 6){
            cout << "element found in position index " << i;
            found = true;
            break;
        }
    }
    if(found ==0){
        cout << "not found";
    }
    return 0;
}