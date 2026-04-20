#include <iostream>
using namespace std;

int find_kth_largest(int arr[], int size, int k) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr[size - k];
}

int main() {
    int arr[] = {3, 1, 7, 4, 9, 2};
    int size = 6, k = 2;

    cout << "K-th Largest: " << find_kth_largest(arr, size, k) << endl;
    return 0;
}