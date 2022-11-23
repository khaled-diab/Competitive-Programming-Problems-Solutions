#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        set<int> set;
        int mx = INT_MIN;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            set.insert(x);
            mx = max(x,mx);
        }
        int sum = 0;
        for (int i = 1; i <= 1000; ++i) {
            if (!set.count(i)) {
                sum += i;
            }
            if (sum >= s && i >= mx) break;
        }
        cout << (sum == s ? "YES" : "NO") << endl;
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
}