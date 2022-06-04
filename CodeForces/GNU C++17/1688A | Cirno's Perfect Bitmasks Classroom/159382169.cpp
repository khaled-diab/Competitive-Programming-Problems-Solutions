#include "bits/stdc++.h"
 #pragma GCC optimize("Ofast")
 using namespace std;
 #define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 using ll = long long;
 unsigned int getPos(int n) {
     return log2(n & -n);
}
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        long long y = n;
        while (n > 0) {
            if (n % 2 != 0) {
                c++;
            }
            n = n / 2;
        }
         if (c > 1) {
            cout << pow(2, getPos(y)) << endl;
        } else if (c == 1) {
            if (y == 1) cout << 3 << endl;
            else cout << y + 1 << endl;
        }
    }
 }