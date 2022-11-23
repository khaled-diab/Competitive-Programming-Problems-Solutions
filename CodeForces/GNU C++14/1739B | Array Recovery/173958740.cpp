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
        int d[n];
        for (int i = 0; i < n; ++i) {
            cin >> d[i];
        }
        int a[n];
        a[0] = d[0];
        bool pass = false;
        for (int i = 1; i < n; ++i) {
            if (d[i] <= a[i - 1] && d[i] != 0) pass = true;
            a[i] = d[i] + a[i - 1];
        }
        if (pass) cout << -1 << endl;
        else {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
 
}