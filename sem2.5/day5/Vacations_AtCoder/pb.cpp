#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;


int main(){
  fastio
  int n;
  cin >> n;
  vector<vii> dp(n, vii(3));
  for(int i = 0; i < n; i++){
    ll a, b, c;
    cin >> a >> b >> c;
    if(i == 0){
      dp[i][0] = a;
      dp[i][1] = b;
      dp[i][2] = c;
    }
    else{
      dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
      dp[i][1] = b + max(dp[i - 1][0], dp[i - 1][2]);
      dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
    }
  }
  cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << fin;
  return 0;
}
