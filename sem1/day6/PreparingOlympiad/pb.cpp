#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;

ll n, l, r, x, cont = 0;
vii v;

void search(int i, ll sum, ll mn, ll mx, int cnt){
  if(i == n){
    if(cnt >= 2 && sum >= l && sum <= r && (mx - mn) >= x) cont++;
    return;
  }

  search(i + 1, sum + v[i], min(mn, v[i]), max(mx, v[i]), cnt + 1);
  
  search(i + 1, sum, mn, mx, cnt);
}

int main(){
  fastio
  cin >> n >> l >> r >> x;
  v.resize(n);
  for(ll i = 0; i < n; i++)
    cin >> v[i];

  search(0, 0LL, LLONG_MAX, LLONG_MIN, 0);
  
  cout << cont << fin;

  return 0;
}
