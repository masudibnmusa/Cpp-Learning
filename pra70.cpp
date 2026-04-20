#include <iostream>
using namespace std;

int array_sum(int arr[], int size) {
    if (size == 1) return arr[0];
    return arr[size - 1] + array_sum(arr, size - 1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    cout << array_sum(arr, 5) << endl;
    return 0;
}