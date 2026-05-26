#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;

int main(){
  fastio
  int n, x;
  cin >> n >> x;
  vi h(n), s(n);
  for(int i = 0; i < n; i++)
    cin >> h[i];
  for(int i = 0; i < n; i ++)
    cin >> s[i];
  vi dp(x + 1, 0);

  for(int i = 0; i < n; i++){
    for(int j = x; j >= h[i]; j--){
      dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
    }
  }

  cout << dp[x] << fin;

  return 0;
}
