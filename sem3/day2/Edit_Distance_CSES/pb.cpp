#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int dp[5005][5005];

int main(){
  fastio
  string s, t;
  cin >> s >> t;
  int ts = s.length(), tt = t.length();

  for(int i = 0; i <= ts; i++)
    dp[i][0] = i;
  for(int j = 0; j <= tt; j++)
    dp[0][j] = j;

  for(int i = 1; i <= ts; i++){
    for(int j = 1; j <= tt; j++){
      if(s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j - 1];
      else
        dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
    }
  }

  cout << dp[ts][tt] << fin;

  return 0;
}
