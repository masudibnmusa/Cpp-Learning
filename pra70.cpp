#include <iostream>
#include <cstring>
using namespace std;

int lcs(char *s1, char *s2, int m, int n) {
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[m][n];
}

int main() {
    char s1[] = "ABCBDAB";
    char s2[] = "BDCAB";

    cout << lcs(s1, s2, strlen(s1), strlen(s2));
    return 0;
}