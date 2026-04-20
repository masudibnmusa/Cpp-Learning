#include <iostream>
using namespace std;

int find_median(int arr[], int size) {
    int mid = size / 2;

    for (int i = 0; i <= mid; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
    return arr[mid];
}

int main() {
    int arr[] = {7, 2, 10, 9, 1};
    int size = 5;

    cout << "Median: " << find_median(arr, size) << endl;
    return 0;
}