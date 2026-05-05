#include <bits/stdc++.h>
 
#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
typedef long long ll;
 
int n;
vector<int> v;
bool band = 0;
void search(int i, int mar){
  if(i == n){
    if(mar == 0 || mar % 360 == 0){
      band = 1;
    }
    return;
  }
  
  search(i + 1, mar + v[i]);
 
  search(i + 1, mar - v[i]);
 
}
 
 
int main(){
  fastio
  cin >> n;
  v.resize(n);
  for(int i = 0; i < n; i++)
    cin >> v[i];
  
  search(0, 0);
 
  if(band) cout << "YES" << fin;
  else cout << "NO" << fin;
  
  return 0;
}
