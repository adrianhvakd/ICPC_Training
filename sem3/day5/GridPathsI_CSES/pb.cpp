#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;

const int MOD = 1e9 + 7;

int main() {
    fastio

    int n;
    cin >> n;

    vs v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vvi dp(n, vector<int>(n, 0));

    if (v[n - 1][n - 1] != '*')
        dp[n - 1][n - 1] = 1;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {

            if (v[i][j] == '*') continue;

            if (i == n - 1 && j == n - 1) continue;

            if (i + 1 < n)
                dp[i][j] = (dp[i][j] + dp[i + 1][j]) % MOD;

            if (j + 1 < n)
                dp[i][j] = (dp[i][j] + dp[i][j + 1]) % MOD;
        }
    }

    cout << dp[0][0] << fin;

    return 0;
}
