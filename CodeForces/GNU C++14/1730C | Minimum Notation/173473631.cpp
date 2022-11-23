#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
const int mx = 1e5 + 9;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string z = s;
        reverse(z.begin(), z.end());
        map<char, int> mp;
        char x = '9';
        for (int i = 0; i < z.length(); ++i) {
            if (z[i] <= x) {
                mp[z[i]]++;
                x = z[i];
            } else {
                if (z[i] < '9') {
                    mp[char(z[i] + 1)]++;
                } else {
                    mp['9']++;
                }
            }
        }
        for (auto it: mp) {
            for (int i = 0; i < it.second; ++i) {
                cout << it.first;
            }
        }
        cout << endl;
    }
}
 
 
 