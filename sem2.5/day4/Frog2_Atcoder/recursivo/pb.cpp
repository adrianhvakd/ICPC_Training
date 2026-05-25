#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi v, dp;
int k;

int solve(int i){
    if(i == 0) return 0;

    if(dp[i] != 1e9) return dp[i];

    for(int j = 1; j <= k; j++){
        if(i - j >= 0){
            dp[i] = min(dp[i], solve(i - j) + abs(v[i] - v[i - j]));
        }
    }
    return dp[i];
}

int main(){
    fastio
    int n;
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    dp.assign(n, 1e9);
    cout << solve(n - 1) << fin;

    return 0;
}
