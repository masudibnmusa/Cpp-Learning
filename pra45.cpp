#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {5,12,22,1,-15,24};
    int n = sizeof(num)/sizeof(num[0]);
    int smallest = INT_MAX;
    for(int i=0;i<n-1;i++){
        if(num[i]<smallest){
            smallest = num[i];
        }
    }
    cout << "Smallest value of the array is : " << smallest ;
    return 0;
}