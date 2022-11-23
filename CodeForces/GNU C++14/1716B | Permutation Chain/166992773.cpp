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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            int x = i;
            x++;
            v[i] = x;
        }
        vector<vector<int>> print;
        int c = 1;
        print.push_back(v);
        for (int i = 0; i < n; i++) {
            if (c < n) {
                swap(v[0], v[c]);
                c++;
            } else break;
            print.push_back(v);
        }
        size_t x = print.size();
        cout << x << endl;
        for (int i = 0; i < x; ++i) {
            size_t y = print[i].size();
            for (int j = 0; j < y; ++j) {
                cout << print[i][j] << " ";
            }
            cout << endl;
        }
    }
}