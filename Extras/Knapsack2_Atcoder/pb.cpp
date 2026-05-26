#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;

const ll INF = 1e18;

int main(){
  fastio
  int n;
  ll w;
  cin >> n >> w;
  vi v(n);
  vii pes(n);
  int sum = 0;
  for(int i = 0; i < n; i++){
    cin >> pes[i] >> v[i];
    sum+= v[i];
  }
  vii dp(sum + 1, INF);
  
  dp[0] = 0;

  for(int i = 0; i < n; i++){
    for(int j = sum; j >= v[i]; j--){
      dp[j] = min(dp[j], dp[j - v[i]] + pes[i]);
    }
  }

  int ans = 0;
  for(int i = 0; i <= sum; i++) {
    if(dp[i] <= w)
      ans = i;
  }

  cout << ans << fin;

  return 0;
}
