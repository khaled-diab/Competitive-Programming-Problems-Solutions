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
        string s;
        cin >> s;
        int q = 0, a = 0;
        bool pass = true;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'Q') q++;
            else a++;
            if (a < q) {
                pass = false;
                break;
            }
        }
        if (s[n - 1] != 'A') {
            cout << "No" << endl;
            continue;
        } else {
            cout << (pass ? "Yes" : "No") << endl;
        }
    }
}