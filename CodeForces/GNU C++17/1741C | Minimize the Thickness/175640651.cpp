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
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        vector<ll> sums;
        ll sqrt = sqrtl(sum);
        for (int i = 1; i <= sqrt; i++) {
            if (sum % i == 0) {
                if (sum / i == i) sums.push_back(i);
                else {
                    sums.push_back(sum / i);
                    sums.push_back(i);
                }
            }
        }
        ll z = sums.size();
        ll mn = INT_MAX;
        for (int i = 0; i < z; ++i) {
            ll x = sum / sums[i];
            bool pass = true;
            ll y = 0;
            ll c = 0;
            ll c1 = INT_MIN;
            for (int j = 0; j < n; ++j) {
                y += a[j];
                c++;
                if (y > x) {
                    pass = false;
                    break;
                }
                if (y == x) {
                    if (c > c1) c1 = c;
                    y = 0;
                    c = 0;
                }
            }
            if (pass) mn = min(c1, mn);
        }
        cout << mn << endl;
    }
 
}