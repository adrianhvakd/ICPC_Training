#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;

vii v;
int n;
ll mindiff = 1e18;
ll totalsum = 0;

void search(int k, ll sumact){
  if(k == n){
    ll diff = abs(sumact - (totalsum - sumact));
    mindiff = min(diff, mindiff);
    return;
  }

  search(k + 1, sumact + v[k]);

  search(k + 1, sumact); 
}

int main(){
  fastio
  cin >> n;
  v.resize(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    totalsum += v[i];
  }
  
  search(0, 0);

  cout << mindiff << fin;

  return 0;
}
