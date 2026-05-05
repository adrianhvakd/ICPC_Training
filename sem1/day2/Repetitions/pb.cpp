#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long ll;

int main(){
  fastio
  string s;
  ll cont = 1;
  ll res = 0;
  cin >> s;
  char lastchar = 'x';
  for(char c: s){
    if(c == lastchar)
      cont++;
    else
      cont = 1;
    res = max(res, cont);
    lastchar = c;
  }
  cout << res << fin;

  return 0;
}
