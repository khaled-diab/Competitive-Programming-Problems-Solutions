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
        string s;
        cin >> s;
        vector<ll> v;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') v.push_back(i + 1);
        }
        if (v.empty()) {
            cout << '0' << endl;
            continue;
        }
        int ok[n + 1] = {};
        ll ans = 0;
        for (int i = 0; i < v.size(); ++i) {
            ll k = 1;
            while (binary_search(all(v), k * v[i])) {
                ll z = k * v[i];
                if (ok[z] == 0) {
                    ans += v[i];
                }
                k++;
                
                ok[z] = 1;
            }
        }
        cout << ans << endl;
    }
}