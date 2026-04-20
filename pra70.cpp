#include <iostream>
using namespace std;

int count_ways(int coins[], int n, int amount) {
    int dp[amount + 1] = {0};

    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int a = coins[i]; a <= amount; a++) {
            dp[a] += dp[a - coins[i]];
        }
    }

    return dp[amount];
}

int main() {
    int coins[] = {1, 2, 3};
    int amount = 4;

    cout << count_ways(coins, 3, amount);
    return 0;
}