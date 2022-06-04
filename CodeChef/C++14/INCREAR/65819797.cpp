#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x >= y) {
            int w = x - y;
            if (w & 1) cout << w / 2 + 2 << endl;
            else cout << w / 2 << endl;
        } else cout << y - x << endl;
    }
}


