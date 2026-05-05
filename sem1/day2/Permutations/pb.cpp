#include<bits/stdc++.h>

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
  vii v(n);
  if( n == 2 || n == 3){
    cout << "NO SOLUTION" << fin;
    return 0;
  }
  for(ll i = 2; i <= n; i += 2){
    if(i == 2)
      cout << i;
    else
      cout << " " << i;
  }
  for(ll i = 1; i <= n; i+= 2){
      cout << " " << i;
  }
  cout << fin;
  return 0;
}

