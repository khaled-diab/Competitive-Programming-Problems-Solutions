#include <bits/stdc++.h>
 #define endl "\n"
using namespace std;
  int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string cells[n];
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }
        bool pass = true;
        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < m; ++k) {
                if (cells[i][k] == 'R') {
                    for (int j = i + 1; j < n; ++j) {
                        for (int l = 0; l < m; ++l) {
                            if (cells[j][l] == 'R' && k > l) {
                                pass = false;
                            }
                        }
                    }
                    goto x;
                }
            }
        }
        x:
        (pass) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}