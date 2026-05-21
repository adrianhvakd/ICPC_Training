#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main(){
    fastio
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> v(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        for(int j = 0; j < a; j++){
            int x, y;
            cin >> x >> y;
            x--;
            v[i].push_back({x, y});
        }
    }

    int ans = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        bool band = true;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                for(auto x: v[i]){
                    bool h = mask & (1 << x.first);
                    if( h != x.second){
                        band = false;
                    }
                }
            }
        }
        if(band) {
            ans = max(ans, __builtin_popcount(mask));
        }
    }

    cout << ans << fin;

    return 0;
}