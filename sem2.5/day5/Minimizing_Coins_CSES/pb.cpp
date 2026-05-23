#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;

int main(){
  fastio
  int n;
  ll x;
  cin >> n >> x;
  vii c(n);
  for(int i = 0; i < n; i++)
    cin >> c[i];
  vii dp(x + 1, 1e11);
  dp[0] = 0;
  for(int i = 1; i <= x; i++){
    for(ll coin: c){
      if(i - coin >= 0){
        dp[i] = min(dp[i], dp[i - coin] + 1);
      }
    }
  }
  if(dp[x] == 1e11)
    cout << -1 << fin;
  else
    cout << dp[x] << fin;
  return 0;
}
