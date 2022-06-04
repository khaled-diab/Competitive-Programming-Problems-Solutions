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
        ll sum = 0;
        ll count = 0;
        ll c = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (!(a[i] & 1)) {
                sum += a[i];
                count++;
                ll c1 = 0;
                while (a[i] > 0 && !(a[i] & 1)) {
                    c1++;
                    a[i] /= 2;
                }
                c = min(c, c1);
            }
        }
        if (count == n) {
            ll z = c + count - 1;
            count--;
            while (sum > 0 && !(sum & 1)) {
                count++;
                sum /= 2;
            }
            cout << min(count, z) << endl;
        } else cout << count << endl;
    }
 }
  