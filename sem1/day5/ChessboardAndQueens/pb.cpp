#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;
typedef vector<string> vs;

ll cont = 0;
int n = 8;
vi col (n * n, 0), diag1 (n * n, 0), diag2( n * n, 0);
vs v(n);

void search(int y){
  if(y == n ){
    cont++;
    return;
  }
  for(int x = 0; x < n; x++){
    if(col[x] || diag1[x + y] || diag2[ x - y + n -1 ] ) continue;
    if(v[y][x] == '*') continue;
    col[x] = 1;
    diag1[x + y] = 1;
    diag2[x - y + n - 1] = 1;
    search(y + 1);
    col[x] = 0;
    diag1[x + y] = 0;
    diag2[x - y + n - 1] = 0;
  }
}

int main(){
  fastio
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  search(0);
  cout << cont << fin;
  return 0;
}
