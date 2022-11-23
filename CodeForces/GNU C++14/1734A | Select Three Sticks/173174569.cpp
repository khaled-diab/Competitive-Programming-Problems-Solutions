#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
const int mx = 1e5 + 9;
 
 
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
        ll ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            ll sum = 0;
            vector<ll> v;
            for (int j = 0; j < n; ++j) {
                v.push_back(abs(a[j] - a[i]));
            }
            sort(all(v));
            sum = v[0] + v[1] + v[2];
            ans = min(ans,sum);
        }
        cout << ans << endl;
 
    }
}