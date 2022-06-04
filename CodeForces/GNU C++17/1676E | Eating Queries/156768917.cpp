#include <bits/stdc++.h>
 #define endl "\n"
using namespace std;
  int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int candies[n];
        int qrs[q];
        int f[n];
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }
        for (int i = 0; i < q; ++i) {
            cin >> qrs[i];
        }
        sort(candies, candies + n);
        f[0] = candies[n - 1];
        for (int i = 1; i < n; ++i) {
            f[i] = candies[n - 1 - i] + f[i - 1];
        }
        for (int i = 0; i < q; ++i) {
            auto it = lower_bound(f, f + n, qrs[i]);
            long long ans = it - f;
            if(ans == n){
                cout << -1 << endl;
            } else cout << ans + 1 << endl;
        }
     }
}