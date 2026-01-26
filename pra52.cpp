#include<iostream>
using namespace std;
void calculation(int arr[],int n,int sum,int product){
    sum = 0;
    product = 1;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
        product = product*arr[i];
    }
    cout << "The sum is : " << sum << "\n";
    cout << "The product is : " << product;
}
int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum,product;
    calculation(arr,n,sum,product);
    return 0;
}