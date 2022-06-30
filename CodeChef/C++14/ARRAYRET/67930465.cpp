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
        ll b[n];
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            sum += b[i];
        }
        sum = sum / (n + 1);
        for (int i = 0; i < n; ++i) {
            cout << b[i] - sum << " ";
        }
        cout << endl;

    }


}
