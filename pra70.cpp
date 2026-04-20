#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Item {
    int weight;
    int value;
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractional_knapsack(Item items[], int n, int capacity) {
    sort(items, items + n, cmp);

    double total = 0.0;

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            total += items[i].value;
            capacity -= items[i].weight;
        } else {
            total += ((double)items[i].value / items[i].weight) * capacity;
            break;
        }
    }
    return total;
}

int main() {
    Item items[] = {{10,60}, {20,100}, {30,120}};
    int n = 3, capacity = 50;

    cout << fixed << setprecision(2);
    cout << "Max Value: " << fractional_knapsack(items, n, capacity);

    return 0;
}