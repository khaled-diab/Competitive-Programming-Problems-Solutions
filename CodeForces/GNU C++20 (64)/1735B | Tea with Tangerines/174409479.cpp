#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int mn = *min_element(a, a + n);
        ll c = 0;
        for (int i = 0; i < n; ++i) {
            ll z = a[i];
            if (z < mn * 2) continue;
            else {
                c += (z + 2 * mn - 1 - 1) / (2 * mn - 1);
                c--;
            }
        }
        cout << c << endl;
    }
 
}