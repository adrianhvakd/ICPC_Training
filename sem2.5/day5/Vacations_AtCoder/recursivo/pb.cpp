#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef vector<int> vi;

vector<vi> v, dp;
int n;

int solve(int i, int j){
    if(i == n) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int ans = 0;
    for(int k = 0; k < 3; k++){
        if(k != j){
            ans = max(ans, v[i][j] + solve(i + 1, k));
        }
    }

    return dp[i][j] = ans;
}

int main(){
    fastio
    cin >> n;
    v.assign(n, vi(3));
    for(int i = 0; i < n; i++)
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    dp.assign(n, vi(3, -1));

    cout << max(solve(0, 0), max(solve(0, 1), solve(0, 2))) << fin;

    return 0;
}
