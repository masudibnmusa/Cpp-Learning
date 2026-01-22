#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {5,12,22,1,-15,24};
    int n = sizeof(num)/sizeof(num[0]);
    int largest = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(num[i]>largest){
            largest = num[i];
        }
        
    }
    cout << "largest value is : " << largest;
    return 0;
}