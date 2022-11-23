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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        set<int> s;
        int x = 0;
        bool pass = false;
        for (int i = n - 1; i >= 0; --i) {
            if (s.count(a[i])) {
                x = i + 1;
                pass = true;
                break;
            } else s.insert(a[i]);
        }
        cout << (pass ? x : 0) << endl;
    }
}