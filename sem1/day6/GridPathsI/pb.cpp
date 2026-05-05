#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;

ll MOD = 1e9 + 7;
int n;
vs v;
vvi dp;

int solve(int i, int j){
  if(i >= n || j >= n) return 0;

  if(v[i][j] == '*') return 0;

  if(i == n - 1 && j == n - 1) return 1;

  if(dp[i][j] != -1) return dp[i][j];

  int res = 0;
  res = (res + solve(i + 1, j)) % MOD;
  res = (res + solve(i, j + 1)) % MOD;
  
  return dp[i][j] = res;
}

int main(){
  fastio
  cin >> n;
  v.resize(n);
  for(int i = 0; i < n; i++)
    cin >> v[i];

  dp.assign(n, vector<int>(n, -1));

  cout << solve(0, 0) << fin;
  return 0;
}
