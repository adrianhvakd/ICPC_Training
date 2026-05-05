#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;

int main(){
  fastio
  int q;
  cin >> q;

  while(q--){
    ll k;
    cin >> k;

    ll len = 1, cont = 9, start = 1;

    while(k > len * cont){
      k -= len * cont;
      len++;
      cont *= 10;
      start *= 10;
    }

    ll num = start + (k - 1) / len;

    string s = to_string(num);

    cout << s[(k - 1) % len] << fin;

  }

  return 0;
}

