#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;

int x, n;
vi v, dp;
int const INF = 1e9;

int solve(int i){
    if(i == 0) return 0;

    if(dp[i] != -1) return dp[i];

    int ans = INF;
    for(int j = 0; j < n; j++){
        if(i - v[j] >= 0){
            ans = min(ans, solve(i - v[j]) + 1);
        }
    }
    return dp[i] = ans;
}

int main(){
    fastio
    cin >> n >> x;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    dp.assign(x + 1, - 1);
    int ans = solve(x);
    ans != INF ? cout << ans << fin : cout << -1<< fin;
    return 0;
}
