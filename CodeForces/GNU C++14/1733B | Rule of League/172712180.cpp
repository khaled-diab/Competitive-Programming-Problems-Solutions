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
        int n, x, y;
        cin >> n >> x >> y;
        int mn = min(x, y);
        if (mn != 0) {
            cout << -1 << endl;
            continue;
        }
        if (x == 0 && y == 0) {
            cout << -1 << endl;
            continue;
        }
        int mx = max(x, y);
 
        if (((n - 1) % mx) == 0) {
            int won = 1;
            int c = 0;
            for (int i = 0; i < n - 1; ++i) {
                if (c == mx) {
                    won = i + 2;
                    c = 0;
                }
                cout << won << " ";
                c++;
            }
            cout << endl;
        } else cout << -1 << endl;
    }
 
}