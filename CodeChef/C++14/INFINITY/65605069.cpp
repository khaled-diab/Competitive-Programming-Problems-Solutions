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
        int ans;
        ans = (n / 5) * 2;
        if (n % 5 != 1 && n % 5 != 0)
            ans++;
        cout << ans << endl;
    }
}