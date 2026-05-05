#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;

const int MAXN = 1e6 + 1;

int main(){
    fastio

    vector<int> div(MAXN, 0);

    for(int i = 1; i < MAXN; i++){
        for(int j = i; j < MAXN; j += i){
            div[j]++;
        }
    }

    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << div[x] << fin;
    }

    return 0;
}
