#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int solve(int x, int y, int m) {
    int z = x - y;
    int w = y - x;
    int ans1 = max(x + y + (m - abs(z) % m), x + y + z % m);

    if (z < 0) {
        ans1 = x + y + (m - abs(z) % m);
    } else ans1 = x + y + z % m;

    int ans2 = max(x + y + (m - abs(w) % m), x + y + w % m);
    if (w < 0) {
        ans2 = x + y + (m - abs(w) % m);
    } else ans2 = x + y + w % m;
    return max(ans1, ans2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int nums[n];
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
//        
        sort(nums, nums + n);

        int a = nums[n - 1], b = nums[n - 1], ans = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] <= a) {
                b = nums[i];
                ans = max((solve(a, b, m)), ans);
            }
        }
        cout << ans << endl;
    }
}