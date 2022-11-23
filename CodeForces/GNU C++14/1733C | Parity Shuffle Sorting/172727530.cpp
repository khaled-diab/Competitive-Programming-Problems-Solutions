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
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        vector<pair<int, int>> v;
        pair<int, int> x;
        x.first = 1;
        x.second = n;
        v.push_back(x);
        if ((a[n - 1] + a[0]) & 1) {
            a[n - 1] = a[0];
        } else a[0] = a[n - 1];
        for (int i = 1; i < n - 1; ++i) {
            pair<int, int> op;
            if (a[0] & 1) {
                if (a[i] & 1) {
                    op.first = i + 1;
                    op.second = n;
                } else {
                    op.first = 1;
                    op.second = i + 1;
                }
            } else {
                if (a[i] & 1) {
                    op.first = 1;
                    op.second = i + 1;
                } else {
                    op.first = i + 1;
                    op.second = n;
                }
            }
            v.push_back(op);
        }
        ll operations = v.size();
        cout << operations << endl;
        for (int i = 0; i < operations; ++i) {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
 
}