#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef vector<int> vi;

vector<vi> v;
vi dp;

int dfs(int u){

    if(dp[u] != -1) return dp[u];

    int ans = 0;
    for(int v : v[u])
        ans = max(ans, 1 + dfs(v));

    return dp[u] = ans;
}

int main(){
    fastio

    int n, m;
    cin >> n >> m;

    v.resize(n + 1);
    dp.assign(n + 1, -1);

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }

    int res = 0;
    for(int i = 1; i <= n; i++)
        res = max(res, dfs(i));

    cout << res << fin;

    return 0;
}
