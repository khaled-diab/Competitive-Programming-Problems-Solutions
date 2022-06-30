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
        int a[2 * n];
        ll odd = 0, even = 0;
        for (int i = 0; i < 2 * n; ++i) {
            cin >> a[i];
            if (a[i] & 1) odd++;
            else even++;
        }
        if (odd > even) {
            cout << odd - n << endl;
        } else if (even > odd) {
            vector<int> answer;
            for (int i = 0; i < n * 2; ++i) {
                if (!(a[i] & 1)) {
                    int count = 0;
                    while (!(a[i] & 1)) {
                        count++;
                        a[i] /= 2;
                    }
                    answer.push_back(count);
                }
            }
            sort(all(answer));
            ll ans = 0;
            for (int i = 0; i < even - n; ++i) {
                ans += answer[i];
            }
            cout << ans << endl;
        } else cout << 0 << endl;

    }


}
