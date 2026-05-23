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
  vi dp(n + 1, 1e9);
  dp[0] = 0;

  for(int i = 1; i <= n; i++){
    int x = i;
    while(x > 0){
      int d = x % 10;
      x /= 10;
      if(d){
        dp[i] = min(dp[i], dp[i - d] + 1);
      }
    }
  }
  cout << dp[n] << fin;

  return 0;
}
