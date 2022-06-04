#include "bits/stdc++.h"
 #define endl "\n"
using namespace std;
  int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> candies(n);
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }
        if (n == 1) {
            if (candies[0] == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
        sort(candies.begin(), candies.end());
        if (candies[n-1] - candies[n - 2] <= 1)
            cout << "YES" << endl;
        else cout << "NO"<< endl;
    }
}
   