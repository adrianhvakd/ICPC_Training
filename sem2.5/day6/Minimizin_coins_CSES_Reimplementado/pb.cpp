#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    fastio
    int n, x;
    cin >> n >> x;
    vi v(n), dp(x + 1, 1e9);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    dp[0] = 0;
    for(int i = 1; i <= x; i++){
        for(int c: v){
            if( i - c >= 0)
                dp[i] = min(dp[i], dp[i - c] + 1);
        }
    }
    if(dp[x] == 1e9)
        cout << -1 << fin;
    else
        cout << dp[x] << fin;
    return 0;
}
