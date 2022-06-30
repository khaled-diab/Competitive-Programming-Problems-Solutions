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
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        if (s - x - y >= z) cout << 0 << endl;
        else if (s - x >= z || s - y >= z) cout << 1 << endl;
        else cout << 2 << endl;
    }


}
