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
        int n, q;
        cin >> n >> q;
        int a[n];
        ll odd = 0, even = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] & 1)odd++;
            else even++;
            sum += a[i];
        }
        for (int i = 0; i < q; ++i) {
            int d, x;
            cin >> d >> x;
            if (d == 0) {
                if (x & 1) {
                    sum = sum + (x * even);
                    odd += even;
                    even = 0;
                } else {
                    sum = sum + (x * even);
                }
            } else {
                if (x & 1) {
                    sum = sum + (x * odd);
                    even += odd;
                    odd = 0;
                } else {
                    sum = sum + (x * odd);
                }
            }
            cout << sum << endl;
        }
 
 
    }
 
}