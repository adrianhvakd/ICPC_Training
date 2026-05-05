#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;

ll MOD = 1e9 + 7;

ll pot(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
  fastio
  ll n;
  cin >> n;
  while(n--){
    ll a, b, c;
    cin >> a >> b >> c;
    ll exp = pot(b, c, MOD - 1);
    cout << pot(a, exp, MOD) << fin;
  }

  return 0;
}
