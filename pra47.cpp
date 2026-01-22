#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {101,234,345,231,456,765};
    int n = sizeof(num)/sizeof(num[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0;i <n; i++){
        smallest = min(num[i],smallest);
        largest = max(num[i],largest);
    }
    cout << smallest << endl;
    cout << largest << endl;
    return 0;
}