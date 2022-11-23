#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
ll solve() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r, x;
        cin >> l >> r >> x;
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        if (abs(a - b) >= x) {
            cout << 1 << endl;
            continue;
        }
        if (b <= r - x && a <= r - x) {
            cout << 2 << endl;
            continue;
        }
        if (b >= l + x && a >= l + x) {
            cout << 2 << endl;
            continue;
        }
        if (b <= r - x && a >= l + x) {
            cout << 3 << endl;
            continue;
        }
        if (b >= l + x && a <= r - x) {
            cout << 3 << endl;
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
}