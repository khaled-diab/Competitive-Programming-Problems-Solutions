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
        int x = n - 3;
        int y = x / 3;
        int l1 = 1;
        int l2 = y;
        int l3 = 2 * y - 1;
        cout << min({abs(l1 - l2), abs(l1 - l3), abs(l2 - l3)}) << endl;
    }
 
}