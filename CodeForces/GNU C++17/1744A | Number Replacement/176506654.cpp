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
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        map<int, char> mp;
        bool pass = false;
        for (int i = 0; i < n; ++i) {
            if (!mp.count(a[i])) {
                mp[a[i]] = s[i];
            } else {
                if(mp[a[i]] != s[i]){
                    pass = true;
                    break;
                }
            }
        }
        cout << (pass ? "NO" : "YES") << endl;
 
 
    }
 
}