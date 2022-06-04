#include <bits/stdc++.h>
 #define endl "\n"
 using namespace std;
 const int size = 1e5;
 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int nums[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
            sum += nums[i];
        }
        bool pass = false;
        for (int i = 0; i < n; ++i) {
            int z = (sum - nums[i]);
            double mean = (double)z / (n - 1);
            if (mean == nums[i]) {
                pass = true;
            }
        }
        cout << (pass ? "YES" : "NO") << endl;
    }
}
  