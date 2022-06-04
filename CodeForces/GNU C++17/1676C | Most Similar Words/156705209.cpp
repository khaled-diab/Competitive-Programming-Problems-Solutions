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
        cin >> n;
        cin >> m;
        char words[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> words[i][j];
            }
        }
        int sum = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    sum += abs(words[i][k] - words[j][k]);
                }
                mini = min(mini,sum);
                sum =0;
            }
        }
        cout << mini << endl;
    }
}