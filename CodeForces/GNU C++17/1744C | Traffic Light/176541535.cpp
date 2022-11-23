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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<ll> v;
        ll idg = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'g')v.push_back(i);
            if (idg == -1) {
                if (s[i] == 'g') idg = i;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                auto it = std::lower_bound(v.begin(), v.end(), i);
                if (it != v.end()) {
                    ans = max(ans, abs(i - *it));
                } else {
                    ans = max(ans, n - i + idg);
                }
            }
        }
        cout << ans << endl;
 
 
    }
 
}