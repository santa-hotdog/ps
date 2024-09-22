#include <bits//stdc++.h>
using namespace std;

int dp[41];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= 40; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    int n;
    cin >> n;
    cout << dp[n] << " " << n - 2;
}
