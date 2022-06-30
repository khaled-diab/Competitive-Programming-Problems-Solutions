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
        int b[n];
        ll cEven = 0, cOdd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (b[i] & 1) cOdd++;
            else cEven++;
        }
        cout << (cOdd & 1 ? "no" : "yes") << endl;
    }


}
