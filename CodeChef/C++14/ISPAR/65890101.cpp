#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        bool odd = true;
        if (k == 1) {
            if (!(n & 1)) {
                odd = false;
            }
        } else if (k == 2) {
            odd = true;
        } else {
            odd = false;
        }
        cout << (odd ? "odd" : "even") << endl;
    }
}


