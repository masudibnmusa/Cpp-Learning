#include <iostream>
using namespace std;

void printUnion(int arr1[], int n1, int arr2[], int n2) {

    
    for (int i = 0; i < n1; i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (!alreadyPrinted) {
            cout << arr1[i] << " ";
        }
    }


    for (int i = 0; i < n2; i++) {
        bool foundInArr1 = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                foundInArr1 = true;
                break;
            }
        }

        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr2[i] == arr2[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (!foundInArr1 && !alreadyPrinted) {
            cout << arr2[i] << " ";
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, n1, arr2, n2);
    return 0;
}
