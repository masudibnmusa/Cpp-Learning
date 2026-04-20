#include <iostream>
using namespace std;

double power(double base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    cout << power(2, 4) << endl;
    return 0;
}