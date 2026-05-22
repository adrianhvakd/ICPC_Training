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
  vi v(n);
  for(int i = 0; i < n; i++)
    cin >> v[i]; 
  vi dp(n);
  dp[0] = 0;
  dp[1] = abs(v[1] - v[0]);
  for(int i = 2; i < n; i++){
    int x = min(abs(v[i] - v[i - 1]) + dp[i - 1], abs(v[i] - v[i - 2]) + dp[i - 2]);
    dp[i] = x;
  }
  cout << dp[n - 1] << fin;
  return 0;
}
