#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int MOD = 1000000007;

int main() {
    fastio

    int n, x;
    cin >> n >> x;

    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> dp(x + 1, 0);
    dp[0] = 1;

    for (int j = 0; j < n; j++) {
        for (int i = v[j]; i <= x; i++) {
            dp[i] = (dp[i] + dp[i - v[j]]) % MOD;
        }
    }

    cout << dp[x] << fin;
    return 0;
}
