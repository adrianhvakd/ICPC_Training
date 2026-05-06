#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;

const ll MOD = 1e9 + 7;
const ll INV2 = 500000004;

ll suma_hasta(ll x) {
    ll res = (x % MOD) * ((x + 1) % MOD) % MOD;
    return (res * INV2) % MOD;
}

int main(){
    fastio
    ll n;
    cin >> n;
    ll total_sum = 0;
    for (ll i = 1, last; i <= n; i = last + 1) {
        ll q = n / i;
        last = n / q;
        ll suma_rango = (suma_hasta(last) - suma_hasta(i - 1) + MOD) % MOD;
        ll contribucion = (suma_rango * (q % MOD)) % MOD;
        total_sum = (total_sum + contribucion) % MOD;
    }
    
    cout << total_sum << fin;
    return 0;
}