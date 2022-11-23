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
        if (n == 3) cout << "-1" << endl;
        else {
            for (int i = n; i > (n + 1) / 2; --i) {
                cout << i << ' ';
            }
            for (int i = 1; i <= (n + 1) / 2; ++i) {
                cout << i << ' ';
            }
            cout << endl;
        }
 
    }
 
}