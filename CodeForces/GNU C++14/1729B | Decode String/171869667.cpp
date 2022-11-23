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
        string s;
        cin >> s;
        string ans = "";
        for (int i = n - 1; i >= 0; --i) {
            string x = "";
            if (s[i] == '0') {
                x = s.substr(i - 2, 2);
                char c = (char) ('a' + stoi(x) - 1);
                ans += c;
                i -=2;
            } else {
                x = s.substr(i, 1);
                char c = (char) ('a' + stoi(x) - 1);
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}
 
 