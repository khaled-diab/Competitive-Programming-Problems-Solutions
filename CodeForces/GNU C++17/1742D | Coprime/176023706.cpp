#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
vector<int> a[1000];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b[n];
        map<int, int> mp, mp1;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            mp[x] = i + 1;
            if (!(mp1.count(x))) {
                v.push_back(x);
                mp1[x] = 0;
            }
        }
        int ans = -1;
        int z = v.size();
//        debug(z);
        for (int i = 0; i < z; ++i) {
            for (int j = 0; j < z; ++j) {
                int f = mp[v[i]] + mp[v[j]];
//                cout << "DSA";
                if (__gcd(v[i], v[j]) == 1) ans = max(ans, f);
            }
        }
        cout << ans << endl;
    }
 
}
 
 
 