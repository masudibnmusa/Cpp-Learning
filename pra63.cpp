#include <iostream>
using namespace std;
int find_median(int *arr, int size) {
    int mid=size/2;
    for (int i = 0;i<=mid;i++) {
        int minIndex = i;
        for (int j = i+1;j<size;j++) {
            if (arr[j]<arr[minIndex]) {
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    if (size%2==0)
        return (arr[mid-1]+arr[mid])/2;
    return arr[mid];
}

int main() {
    int arr[] = {2,6,4,5,3,8,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The median is : " << find_median(arr, n);
    return 0;
}
