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
        int x = n / 3;
        x += (x * 3 != n);
        if (n == 1) {
            cout << 2 << endl;
            continue;
        }
        cout << x << endl;
    }
}