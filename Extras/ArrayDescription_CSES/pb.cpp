#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

int main() {
    fastio

    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for(int i = 0; i < n; i++)
        cin >> x[i];

    vector<vector<ll>> dp(n, vector<ll>(m + 2, 0));

    if(x[0] == 0){
        for(int v = 1; v <= m; v++)
            dp[0][v] = 1;
    } else {
        dp[0][x[0]] = 1;
    }

    for(int i = 1; i < n; i++){

        if(x[i] == 0){

            for(int v = 1; v <= m; v++){

                dp[i][v] =
                    (dp[i-1][v-1]
                    + dp[i-1][v]
                    + dp[i-1][v+1]) % MOD;
            }

        } else {

            int v = x[i];

            dp[i][v] =
                (dp[i-1][v-1]
                + dp[i-1][v]
                + dp[i-1][v+1]) % MOD;
        }
    }

    ll ans = 0;

    if(x[n-1] == 0){
        for(int v = 1; v <= m; v++)
            ans = (ans + dp[n-1][v]) % MOD;
    } else {
        ans = dp[n-1][x[n-1]];
    }

    cout << ans << '\n';
}
