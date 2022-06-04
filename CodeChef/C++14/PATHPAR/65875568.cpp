#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >>  k;
        if (n & 1) {
            if (k == 1) cout << "yes" << endl;
            else cout << "no" << endl;
        } else cout << "yes" << endl;
    }
}


