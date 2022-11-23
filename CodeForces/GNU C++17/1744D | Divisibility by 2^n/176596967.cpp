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
        ll a[n];
        int c = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            while (!(a[i] & 1)) {
                c++;
                a[i] /= 2;
            }
        }
        priority_queue<int> pq;
        for (int i = 1; i <= n; ++i) {
            int c1 = 0;
            int z = i;
            while (!(z & 1)) {
                c1++;
                z /= 2;
            }
            pq.push(c1);
        }
        int ans = 0;
        if (c >= n) cout << 0 << endl;
        else {
            while (c < n && !pq.empty()) {
                c += pq.top();
                pq.pop();
                ans++;
            }
            if(c >= n) cout << ans << endl;
            else cout << -1 << endl;
        }
 
    }
 
}