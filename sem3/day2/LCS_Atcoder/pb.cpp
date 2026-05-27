#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;

int dp[3005][3005];

int main(){
  fastio
  string s, t;
  cin >> s >> t;
  int ts = s.length(), tt = t.length();

  for(int i = 1; i <= ts; i++){
    for(int j = 1; j <= tt; j++){
      if(s[i - 1] == t[j - 1]){
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  string ans = "";
  int i = ts, j = tt;
  while(i > 0 && j > 0){
    if(s[i - 1] == t[j - 1]){
      ans.push_back(s[i - 1]);
      i--; j--;
    }
    else{
      if(dp[i - 1][j] >= dp[i][j - 1]){
        i--;
      }
      else {
        j--;
      }
    }
  }

  reverse(ans.begin(), ans.end());

  cout << ans << fin;

  return 0;
}
