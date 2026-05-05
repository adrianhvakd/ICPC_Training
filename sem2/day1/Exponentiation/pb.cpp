#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;

ll MOD = 1000000000 + 7;

ll pot(ll a, ll b) {
    if (b == 0) return 1;
    ll x = pot(a, b / 2) % MOD;
    x = (x * x) % MOD;
    if (b % 2 == 0) return x;
    return (x * a) % MOD;
}

int main(){
  fastio
  ll n;
  cin >> n;
  while(n--){
    ll a, b;
    cin >> a >> b;
    cout << pot(a, b) << fin;
  }

  return 0;
}
