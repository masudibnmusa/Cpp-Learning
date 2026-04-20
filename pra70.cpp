#include <iostream>
using namespace std;

int array_max(int arr[], int size) {
    if (size == 1) return arr[0];
    return max(arr[size - 1], array_max(arr, size - 1));
}

int main() {
    int arr[] = {3, 1, 9, 2, 7};
    cout << array_max(arr, 5) << endl;
    return 0;
}