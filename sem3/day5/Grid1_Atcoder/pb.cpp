#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main() {
    fastio

    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    vector<vector<ll>> dp(H, vector<ll>(W, 0));

    dp[0][0] = 1;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (grid[i][j] == '#') {
                dp[i][j] = 0;
                continue;
            }

            if (i == 0 && j == 0) continue;

            if (i > 0) dp[i][j] += dp[i - 1][j];
            if (j > 0) dp[i][j] += dp[i][j - 1];

            dp[i][j] %= MOD;
        }
    }

    cout << dp[H - 1][W - 1] << fin;

    return 0;
}
