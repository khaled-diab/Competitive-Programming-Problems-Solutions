#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    int t, n, x;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> x;
        if (n == x)
            cout << x + 1 << endl;
        if (n > x) {
            cout << (2 * n) - x + 1 << endl;
        } else if (n < x) {
            cout << ((2 * n) - x) + 1 << endl;
        }
    }
}