#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
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
        int gcd = a[0];
        for (int i = 0; i < n - 1; ++i) {
            gcd = __gcd(gcd, a[i + 1]);
        }
        if (gcd == 1) {
            cout << 0 << endl;
            continue;
        } else {
            if (__gcd(gcd, n) == 1) cout << 1 << endl;
            else if (__gcd(gcd, n - 1) == 1) cout << 2 << endl;
            else cout << 3 << endl;
        }
 
    }
}