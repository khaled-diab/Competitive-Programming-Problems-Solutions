#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (x * 5 + y * 10) / z << endl;
    }
}


