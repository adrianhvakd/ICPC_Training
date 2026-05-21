#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;

int main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            ll aux;
            cin >> aux;
            sum ^= aux;
        }
        if(!sum)
            cout << "second" << fin;
        else
            cout << "first" << fin;
    }

    return 0;
}