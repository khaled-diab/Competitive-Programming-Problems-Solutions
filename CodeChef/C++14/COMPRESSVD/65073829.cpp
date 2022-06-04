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
        int frames[n];
        for (int i = 0; i < n; ++i) {
            cin >> frames[i];
        }
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                if (frames[i] == frames[i + 1]) {
                    count++;
                    frames[i] = 0;
                }
            } else if (i == n - 1) {
                if (frames[i] == frames[i - 1]) {
                    count++;
                    frames[i] = 0;
                }
            } else if (frames[i] == frames[i - 1] || frames[i] == frames[i + 1]) {
                count++;
                frames[i] = 0;
            }
        }
        cout << n - count << endl;
    }
}