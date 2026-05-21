#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;

int main(){
    fastio
    int n;
    cin >> n;
    vii v(n);

    ll total_sum = 0;
    ll mindiff = 1e18;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        total_sum += v[i];
    }

    for(int mask = 0; mask < (1 << n); mask++){
        ll sumact = 0;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                sumact += v[i];
            }
        }
        ll diff = abs(sumact - (total_sum - sumact));
        mindiff = min(mindiff, diff);
    }
    cout << mindiff << fin;
    return 0;
}