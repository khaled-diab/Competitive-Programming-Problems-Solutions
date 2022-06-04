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
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1;) {
            if (nums[i] > nums[i + 1]) {
                ans++;
                i += 2;
            } else i += 1;
        }
        cout << ans << endl;
    }
}
  