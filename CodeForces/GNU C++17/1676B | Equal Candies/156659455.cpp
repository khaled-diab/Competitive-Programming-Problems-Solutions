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
        int candies[n];
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }
        int min = *min_element(candies, candies + n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += candies[i] - min;
        }
        cout << sum << endl;
    }
}