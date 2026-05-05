#include <bits/stdc++.h>
 
#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vii;
typedef vector<string> vs;
 
int main(){
  fastio
  string s;
  cin >> s;
  vs results;
  sort(s.begin(),s.end());
  do{
    results.push_back(s);
  }while(next_permutation(s.begin(), s.end())); 
 
  cout << (int)results.size() << fin;
  for(auto x: results)
    cout << x << fin;
  return 0;
}
