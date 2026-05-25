#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi v, dp;

int solve(int i){
    if(i == 0) return 0;

    if(i == 1) return abs(v[1] - v[0]);

    if(dp[i] != -1) return dp[i];

    return dp[i] = min(solve(i - 1) + abs(v[i] - v[i - 1]), solve(i - 2) + abs(v[i] - v[i - 2]));
}

int main(){
    fastio
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i ++)
        cin >> v[i];
    dp.assign(n, -1);
    cout << solve(n - 1) << fin;
    return 0;
}
