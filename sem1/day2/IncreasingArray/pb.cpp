#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;

int main(){
  fastio
  ll n;
  cin >> n;
  ll v[n];
  for(ll i = 0; i < n; i++)
    cin >> v[i];

  ll res = 0;
  for(ll i = 0; i < n - 1; i++){
    if(v[i] > v[i + 1]){
      res += v[i] - v[i + 1];
      v[i + 1] = v[i];
    }
  }

  cout << res << fin;

  return 0;
}
