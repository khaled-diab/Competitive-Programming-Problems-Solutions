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
        int s;
        cin >> s;
        string y;
        int x = min(s, 9);
        for (int i = 0;; ++i) {
            if (s <= 0) break;
            x = min(s, x);
            y += to_string(x);
            s -= x;
            x--;
        }
        for (int i = y.length() - 1; i >= 0; --i) {
            cout << y[i];
        }
        cout << endl;
    }
 
}