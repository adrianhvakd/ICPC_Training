#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef long long ll;
typedef vector<ll> vii;

ll MOD = 1e9 + 7;
int main(){
  fastio
  ll n;
  cin >> n;
  vii dp(n + 1, 0);
  dp[0] = 1;
  for(ll i = 1; i <= n; i++){
    for(int j = 1; j <= 6; j++){
      if(i - j >= 0){
        dp[i] = (dp[i] + dp[i - j]) % MOD;
      }
      else {
        break;
      }
    }
  }
  cout << dp[n] << fin;
  return 0;
}
