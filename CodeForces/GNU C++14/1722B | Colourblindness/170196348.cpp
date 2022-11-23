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
        char a[2][n];
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        bool pass = true;
        for (int i = 0; i < n; ++i) {
            if (a[0][i] == 'R') {
                if(a[1][i] != 'R') pass = false;
            }
            else {
                if(a[1][i] == 'R') pass = false;
            }
        }
        cout <<(pass ? "YES" : "NO") << endl;
    }
 
}