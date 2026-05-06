#include <bits/stdc++.h>

#define fin '\n'
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long ll;
typedef vector<ll> vii;
typedef vector<int> vi;

const int MAX_VAL = 1e6;
int freq[MAX_VAL + 1];

int main(){
    fastio
    ll n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    for (int d = MAX_VAL; d >= 1; d--) {
        int multiples_count = 0;
        for (int j = d; j <= MAX_VAL; j += d) {
            multiples_count += freq[j];
            if (multiples_count >= 2) {
                cout << d << fin;
                return 0;
            }
        }
    }
    return 0;
}