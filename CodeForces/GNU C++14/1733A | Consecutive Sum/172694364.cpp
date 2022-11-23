#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
 
int mod = 1e9 + 7;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll a[n + 1];
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        ll sum = 0;
        vector<ll> v(k, 0);
        for (int i = 1; i <= n; ++i) {
            v[i % k] = max(v[i % k], a[i]);
        }
        for (int i = 0; i < k; ++i) {
            sum += v[i];
        }
        cout << sum << endl;
    }
}
 
 