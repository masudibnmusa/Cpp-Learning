#include <iostream>
using namespace std;

void insert_sorted(int out[], int &size, int value) {
    int i = size - 1;
    while (i >= 0 && out[i] > value) {
        out[i + 1] = out[i];
        i--;
    }
    out[i + 1] = value;
    size++;
}

void merge_sorted(int a[], int n, int b[], int m, int out[]) {
    int size = 0;

    for (int i = 0; i < n; i++) insert_sorted(out, size, a[i]);
    for (int i = 0; i < m; i++) insert_sorted(out, size, b[i]);
}

int main() {
    int a[] = {5, 1, 9};
    int b[] = {3, 7, 2, 6};
    int out[7];

    merge_sorted(a, 3, b, 4, out);

    cout << "Merged: ";
    for (int i = 0; i < 7; i++) cout << out[i] << " ";
    return 0;
}