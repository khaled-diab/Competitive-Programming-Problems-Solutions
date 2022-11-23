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
        string a, b;
        cin >> a >> b;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) v.push_back(i);
        }
        int l = v.size();
        if (l & 1) {
            cout << -1 << endl;
            continue;
        }
 
        if (l == 2) {
            if (v[0] + 1 == v[1]) {
                if (n < 4) {
                    cout << x << endl;
                } else if (n == 4) {
                    if (v[0] != 0) {
                        cout << x << endl;
                    } else {
                        int z = 2 * y;
                        cout << min(x, z) << endl;
                    }
                } else if (n > 4) {
                    int z = 2 * y;
                    cout << min(x, z) << endl;
                }
            } else cout << y << endl;
 
        } else cout <<1ll* y * (l / 2)  << endl;
    }
 
}