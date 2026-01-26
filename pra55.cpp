#include<iostream>
using namespace std;
void intersection(int arr1[],int n1, int arr2[],int n2){
    for(int i=0;i<n1;i++){
        bool isCommon = false;

        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                isCommon = true;
                break;
            }
        }
        bool alreadyPrinted = false;
        for(int k=0;k<i;k++){
            if(arr1[k]==arr2[i]){
                alreadyPrinted = true;
                break;
            }
        }
        if(isCommon && !alreadyPrinted){
            cout << arr1[i] << " ";
        }
    }
}
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {1,2,3,4,5,6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,n1,arr2,n2);
    return 0;
}