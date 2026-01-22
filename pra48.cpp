#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {101,203,303,404,505,606,707,808,909};
    int n = sizeof(num)/sizeof(num[0]);
    int smallest = INT_MAX; 
    int smallest_index = -1;
    int largest = INT_MIN;
    int largest_index = -1;

    for(int i=0;i<n;i++){
        if(num[i]<smallest){
            smallest = num[i];
            smallest_index = i;
        }
    }

    for(int i=0;i<n;i++){
        if(num[i]>largest){
            largest = num[i];
            largest_index = i;
        }
    }
    cout << "Index number for largest is : "<< largest_index <<endl;
    cout << "Index number for smallest is : "<< smallest_index << endl;
     
    return 0;
}