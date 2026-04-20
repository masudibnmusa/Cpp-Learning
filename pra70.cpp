#include <iostream>
using namespace std;

int count_digits(int n) {
    if (n == 0) return 1;
    return 1 + count_digits(n / 10);
}

int main() {
    cout << count_digits(98765) << endl;
    return 0;
}