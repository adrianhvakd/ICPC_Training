#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
    fastio
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m);

    for(int i = 0; i < m; i++){
        int k;
        cin >>k;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            x--;
            v[i].push_back(x);
        }
    }

    vector<int> p(m);

    for(int i = 0; i < m; i++)
        cin >> p[i];

    int ans = 0;
    
    for(int mask = 0; mask < (1 << n); mask++){
        bool band = 1;

        for(int i = 0; i < m; i++){
            int cont = 0;
            for(auto x: v[i]){
                if(mask & (1 << x))
                    cont++;
            }
            if(cont % 2 != p[i])
                band = 0;
        }

        if(band) ans++;

    }

    cout << ans << fin;

    return 0;
}