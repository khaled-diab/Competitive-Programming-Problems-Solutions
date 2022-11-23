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
        int a, b, c;
        cin >> a >> b >> c;
        int x;
        if (b < c) x = abs(b - c) + c - 1;
        else x = b - 1;
        a--;
        if (x > a) cout << 1 << endl;
        else if (x < a) cout << 2 << endl;
        else cout << 3 << endl;
    }
}
 
 