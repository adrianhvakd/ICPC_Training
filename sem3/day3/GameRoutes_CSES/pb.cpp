#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

const ll MOD = 1e9 + 7;

vector<vi> g;
vector<ll> dp;

ll dfs(int u, int n){
    if(u == n) return 1;

    if(dp[u] != -1) return dp[u];

    ll ans = 0;
    for(int v : g[u])
        ans = (ans + dfs(v, n)) % MOD;

    return dp[u] = ans;
}

int main(){
    fastio

    int n, m;
    cin >> n >> m;

    g.resize(n + 1);
    dp.assign(n + 1, -1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    cout << dfs(1, n) << fin;

    return 0;
}
