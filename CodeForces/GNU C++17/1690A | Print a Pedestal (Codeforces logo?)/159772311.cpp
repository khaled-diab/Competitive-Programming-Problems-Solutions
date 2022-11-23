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
        int third = (n - 3) / 3;
        int x = n - third;
        int first, second;
        if (x & 1) {
            first = (x + 1) / 2;
            second = (x - 1) / 2;
        } else {
            first = (x / 2) + 1;
            second = n - third - first;
        }
        cout << second << " " << first << " " << third << endl;
    }
}
 