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
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            int c = i;
            int b[n];
            for (int j = 0; j < n; ++j) {
                b[j] = a[j];
            }
            bool pass = false;
            for (int k = 1; k <= i; ++k) {
                sort(b, b + n);
                reverse(b,b+n);
                pass = false;
//                debug(i-k+1);
                for (int j = 0; j < n; ++j) {
//                    debug(b[j]);
                    if (b[j] <= i - k + 1) {
                        pass = true;
                        b[j] = 200;
                        break;
                    }
                }
                b[n - 1] += i - k + 1;
//                auto it = min_element(b, b + n);
//                b[it - b] += i - k + 1;
//                debug(b[it-b]);
            }
            if (pass) ans = max(ans, i);
//            debug(ans);
        }
        cout << ans << endl;
 
    }
 
 
}
 
 