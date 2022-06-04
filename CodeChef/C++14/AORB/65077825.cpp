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
        cout << max((500 - x * 2) + (1000 - (x + y) * 4), (500 - (x + y) * 2) + (1000 - y * 4)) << endl;
    }
}