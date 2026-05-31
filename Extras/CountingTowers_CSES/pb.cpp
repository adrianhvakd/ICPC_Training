#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;
const int MAXN = 1000000;

int main() {
    fastio

    vector<vector<ll>> dp(MAXN + 1, vector<ll>(2));

    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= MAXN; i++) {
        dp[i][0] = (4 * dp[i - 1][0] + dp[i - 1][1]) % MOD;
        dp[i][1] = (dp[i - 1][0] + 2 * dp[i - 1][1]) % MOD;
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << (dp[n][0] + dp[n][1]) % MOD << fin;
    }

    return 0;
}
