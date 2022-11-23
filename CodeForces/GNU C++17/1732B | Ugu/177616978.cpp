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
        int op = 0;
        for (int i = 0; i < n - 1; ++i) {
            int x = s[i] - '0';
            int y = s[i+1] - '0';
            if (!(op & 1)) {
                if (x > y)op++;
            } else {
                if ((x ^ 1) > (y ^1)) op++;
            }
        }
        cout << op << endl;
 
    }
 
}