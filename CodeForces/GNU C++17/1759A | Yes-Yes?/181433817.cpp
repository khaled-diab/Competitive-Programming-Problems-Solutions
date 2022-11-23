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
        string s;
        cin >> s;
        string x;
        int y = (s.length() + 3 - 1) / 3;
        for (int i = 0; i <= y; ++i) {
            x += "Yes";
        }
        if (x.find(s) != string::npos) cout << "Yes" << endl;
        else cout << "no" << endl;
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
}