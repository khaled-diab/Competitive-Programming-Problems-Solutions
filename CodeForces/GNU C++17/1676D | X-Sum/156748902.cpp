#include <bits/stdc++.h>
 #define endl "\n"
using namespace std;
  int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> n;
        cin >> m;
        int grid[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; ++i) {
            sum = 0;
            for (int j = 0; j < m; ++j) {
                sum = 0;
                for (int k = 0; k <= m && k <= n ; ++k) {
                    if (i + k < n && j + k < m) {
                        sum += grid[i + k][j + k];
//                        cout << sum << endl;
                    }
                    if (i - k >= 0 && j - k >= 0 && k != 0 ) {
                        sum += grid[i - k][j - k];
//                        cout << sum << endl;
                     }
                    if (i - k >= 0 && j + k < m && k != 0 ){
                        sum += grid[i - k][j + k];
//                        cout << sum << endl;
                     }
                    if(i +k < n && j - k >= 0 && k != 0){
                        sum += grid[i + k][j - k];
//                        cout << sum << endl;
                    }
//                    if (i - k > 0 && i - k < n && i - k < m && j - k > 0 && j - k < n && j - k < m) {
//                    }
                }
                maxi = max(maxi, sum);
                sum = 0;
            }
            sum =0;
        }
        cout << maxi << endl;
    }
}