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
        int q;
        cin >> q;
        ll steps[n];
        for (int i = 0; i < n; ++i) {
            cin >> steps[i];
        }
        ll premx[n + 9] = {};
        premx[0] = steps[0];
        ll prefix[n + 9] = {};
        prefix[0] = steps[0];
        map<ll, ll> mp;
        ll mx = INT_MIN;
        for (int i = 0; i < n; ++i) {
            ll w = steps[i];
            mx = max(mx, w);
            mp[mx] = i;
        }
        for (int i = 1; i < n; ++i) {
            premx[i] = max(premx[i - 1], steps[i]);
            prefix[i] = prefix[i - 1] + steps[i];
        }
        for (int i = 0; i < q; ++i) {
            int k;
            cin >> k;
            int l = 0, r = n - 1;
            ll f = INT_MAX;
            for (int j = 0; j < n; ++j) {
//                debug(premx[j]);
            }
            while (l <= r) {
                int mid = (l + r) / 2;
                if (premx[mid] <= k) l = mid + 1, f = premx[mid];
                else r = mid - 1;
//                debug(premx[mid]);
            }
//            debug(f);
            if (f == INT_MAX) cout << 0 << " ";
            else
                cout << prefix[mp[f]] <<" ";
        }
        cout << endl;
    }
 
 
}