#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;

int main(){
  fastio
  ll n;
  cin >> n;
  ll cont = 0;
  while(n >= 5){
    n /= 5;
    cont += n;
  }
  cout << cont << fin;
  return 0;
}
