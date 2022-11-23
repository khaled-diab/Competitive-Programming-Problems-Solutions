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
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        int n = s.size();
        for (int i = 1; i < n - 1; ++i) {
            mp[s[i]].push_back(i + 1);
        }
        ll ans = 0;
        if (s[0] >= s[n - 1]) {
            for (int i = s[0]; i >= s[n - 1]; --i) {
                ans += mp[char(i)].size();
            }
            int x = s[0] - s[n - 1];
            ans += 2;
            cout << x << " " << ans << endl;
            cout << 1 << " ";
            for (int i = s[0]; i >= s[n - 1]; --i) {
                for (int j = 0; j < mp[char(i)].size(); ++j) {
                    cout << mp[char(i)][j] << " ";
                }
            }
            cout << n << endl;
        } else {
            for (int i = s[0]; i <= s[n - 1]; ++i) {
                ans += mp[char(i)].size();
            }
            int x = s[n - 1] - s[0];
            ans += 2;
            cout << x << " " << ans << endl;
            cout << 1 << " ";
            for (int i = s[0]; i <= s[n - 1]; ++i) {
                for (int j = 0; j < mp[char(i)].size(); ++j) {
                    cout << mp[char(i)][j] << " ";
                }
            }
            cout << n << endl;
        }
    }
}
 
 