#include <bits//stdc++.h>
using namespace std;

vector<int> a;
vector<int> dp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    a.resize(n);
    dp.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0] = a[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    }
    cout << *max_element(dp.begin(), dp.end());
}
