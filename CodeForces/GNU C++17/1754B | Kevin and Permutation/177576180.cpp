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
        if (n & 1) {
            int x = (n + 1) / 2;
            cout << x << ' ';
            for (int i = 1; i < x; ++i) {
                cout << i << ' ' << i + x << ' ';
            }
        } else {
            int x = n / 2;
            for (int i = 1; i <= x; ++i) {
                cout << i + x << ' ' << i << ' ';
            }
        }
        cout << endl;
    }
}