#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        vector<int> sol;
        for (int i = 0; i < n; ++i) {
            int x = a[i] ^ b[i];
            sol.push_back(x);
        }
        sort(sol.begin(), sol.end());

        int c = 0, x = sol[0];
        long long ans = 0;
        for (int i = 0; i < sol.size();) {

            if (sol[i] == x) {
                ans += c;
                c++;
                ++i;
            } else {
                c = 0;
                x = sol[i];
            }
        }
        cout << ans << endl;
//        cout << endl;
    }
}