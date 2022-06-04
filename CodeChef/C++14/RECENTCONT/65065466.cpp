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
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; ++i) {
            string x;
            cin >> x;
            (x == "START38") ? count1++ : count2++;
        }
        cout << count1 << " " << count2 << endl;
    }
}