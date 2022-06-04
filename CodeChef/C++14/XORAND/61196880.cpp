#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while (t--) {
        long long ans = 0;
        cin >> n;
        int a[n];
        int f[32] = {};
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            f[__lg(a[i])]++;
        }
        for (int i: f) {
            ans += (long long)i * (i - 1) / 2;
        }
        cout << ans << endl;
    }
}