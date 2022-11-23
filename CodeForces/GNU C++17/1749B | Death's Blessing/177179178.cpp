#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        pair<ll, int> b[n];
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            b[i] = {x, i};
        }
        sort(b, b + n);
        ll ans = 0;
        for (int i = 0; i < n-1; ++i) {
            ans += b[i].first;
            ans += a[b[i].second];
        }
        ans += a[b[n-1].second];
        cout << ans << endl;
 
    }
 
 
}
 
 