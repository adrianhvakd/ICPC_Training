#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    fastio
    int n;
    cin >> n;
    vi v(n), dp(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    dp[0] = 0;
    dp[1] = abs(v[0] - v[1]);
    for(int i = 2; i < n; i++){
        dp[i] = min(abs(v[i - 1] - v[i]) + dp[i - 1], abs(v[i - 2] - v[i]) + dp[i - 2]);
    }
    cout << dp[n - 1] << fin;
    return 0;
}
