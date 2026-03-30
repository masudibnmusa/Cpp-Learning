#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

// comparator (ratio অনুযায়ী sort করার জন্য)
bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2; // descending order
}

double fractionalKnapsack(int W, Item arr[], int n) {
    // Step 1: sort items by value/weight ratio
    sort(arr, arr + n, cmp);

    double totalValue = 0.0;

    // Step 2: greedy selection
    for (int i = 0; i < n; i++) {

        // যদি পুরো item নেওয়া যায়
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            totalValue += arr[i].value;
        }
        else {
            // fraction নেওয়া হবে
            totalValue += (double)arr[i].value * W / arr[i].weight;
            break; // bag full
        }
    }

    return totalValue;
}

int main() {
    int W = 50; // capacity

    Item arr[] = {
        {60, 10},
        {100, 20},
        {120, 30}
    };

    int n = 3;

    cout << "Maximum value = " << fractionalKnapsack(W, arr, n);

    return 0;
}