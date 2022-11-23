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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        if (m == n) {
            if (a == b) cout << "yes" << endl;
            else cout << "no" << endl;
        } else {
//            debug(a.substr(n - m + 1, m - 1));
//            debug(b.substr(1, m - 1));
            if (a.substr(n - m + 1, m - 1) == b.substr(1, m - 1)) {
//                debug(b[0]);
                if (b[0] == '1') {
                    bool pass = false;
                    for (int i = 0; i < n - m + 1; ++i) {
                        if (a[i] == '1') {
                            pass = true;
                            break;
                        }
                    }
                    cout << (pass ? "yes" : "no") << endl;
                } else {
                    bool pass = false;
                    for (int i = 0; i < n - m + 1; ++i) {
                        if (a[i] == '0') {
                            pass = true;
                            break;
                        }
                    }
                    cout << (pass ? "yes" : "no") << endl;
                }
            } else cout << "no" << endl;
        }
    }
}