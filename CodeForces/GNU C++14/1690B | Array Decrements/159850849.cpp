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
        int b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        bool pass = true;
        int x = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int y;
            if (a[i] < b[i]) {
                pass = false;
                x = 0;
                break;
            } else if (b[i] != 0) {
                y = a[i] - b[i];
                x = min(x, y);
            }
        }
        for (int i = 0; i < n; ++i) {
            int y = a[i] - b[i];
            if (y > x) {
                pass = false;
                break;
            }
        }
        if (x == INT_MAX) cout << "YES" << endl;
        else cout << (pass ? "YES" : "NO") << endl;
 
    }
}
 