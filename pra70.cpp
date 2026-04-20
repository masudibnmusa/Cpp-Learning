#include <iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == target) return mid;
    else if (target < arr[mid])
        return binary_search(arr, left, mid - 1, target);
    else
        return binary_search(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {1,3,5,7,9};
    cout << binary_search(arr, 0, 4, 7) << endl;
    return 0;
}