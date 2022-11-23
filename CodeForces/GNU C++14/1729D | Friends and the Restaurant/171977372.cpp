#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
 
int mod = 1e9 + 7;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        priority_queue<int> pos, neg;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            int x = b[i] - a[i];
            if (x >= 0) pos.push(x);
            else neg.push(-x);
        }
        ll ans = 0;
        while (!neg.empty() && !pos.empty()) {
            int x = pos.top();
            int y = neg.top();
            if (y <= x) {
                pos.pop();
                neg.pop();
                ans++;
            } else {
                neg.pop();
            }
        }
        cout << ans + (pos.size() / 2) << endl;
    }
}
 
 