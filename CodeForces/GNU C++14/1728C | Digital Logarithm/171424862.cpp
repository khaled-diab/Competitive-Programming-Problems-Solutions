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
        int a[n], b[n];
        map<int, int> mp1, mp2, t1, t2;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mp1[a[i]]++;
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            mp2[b[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp1[a[i]] >= 1 && mp2[a[i]] >= 1) {
                mp1[a[i]]--, mp2[a[i]]--;
            }
        }
 
        vector<int> v1, v2;
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            if (mp1[a[i]] >= 1 && a[i] >= 10) {
                int x = a[i];
                int c = log10(x) + 1;
                mp1[x]--;
                v1.push_back(c);
                t1[c]++;
                ans++;
            } else if (mp1[a[i]] >= 1) {
                v1.push_back(a[i]);
                mp1[a[i]]--;
                t1[a[i]]++;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (mp2[b[i]] >= 1 && b[i] >= 10) {
                int x = b[i];
                int c = log10(x) + 1;
                mp2[x]--;
                v2.push_back(c);
                t2[c]++;
                ans++;
            } else if (mp2[b[i]] >= 1) {
                v2.push_back(b[i]);
                mp2[b[i]]--;
                t2[b[i]]++;
            }
        }
 
        ll c1 = 0;
        int y = v1.size();
        for (int i = 0; i < y; ++i) {
            if (t1[v1[i]] >= 1 && t2[v1[i]] >= 1) {
                t1[v1[i]]--;
                t2[v1[i]]--;
                c1++;
            }
        }
        for (int i = 0; i < y; ++i) {
            if (t1[v1[i]] != 0 && v1[i] != 1) {
                t1[v1[i]]--;
                ans++;
            }
        }
        int z = v2.size();
        for (int i = 0; i < z; ++i) {
            if (t2[v2[i]] != 0 && v2[i] != 1) {
                t2[v2[i]]--;
                ans++;
            }
        }
        cout << ans << endl;
        
    }
}