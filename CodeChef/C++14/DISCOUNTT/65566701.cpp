#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int nums[n];
        int sum1 = 0, sum2 = x;
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
            sum1 += nums[i];
            int z = nums[i] - y;
            if (z > 0) sum2 += z;
        }
        cout << (sum1 > sum2 ? "COUPON":"NO COUPON") << endl;


    }
}





