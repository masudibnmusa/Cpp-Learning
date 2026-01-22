#include<iostream>
using namespace std;
int main(){
    int marks1[] = {12,23,34,56,67,78};
    int n = sizeof(marks1)/sizeof(marks1[0]);
    for(int i=0;i<n-1;i++){
        cout << marks1[i] << " ";
    } 
    return 0;
}