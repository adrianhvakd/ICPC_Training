#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;

int main(){
  fastio
  int n, w;
  cin >> n >> w;
  vi pes(n);
  vii v(n);
  for(int i = 0; i < n; i++)
    cin >> pes[i] >> v[i];
  vii dp(w + 1, 0);

  for(int i = 0; i < n; i++){
    for(int j = w; j >= pes[i]; j--){
      dp[j] = max(dp[j], dp[j - pes[i]] + v[i]);
    }
  }

  cout << dp[w] << fin;

  return 0;
}
