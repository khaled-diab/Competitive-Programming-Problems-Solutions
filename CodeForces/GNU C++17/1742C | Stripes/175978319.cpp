#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        char a[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> a[i][j];
            }
        }
        bool red = false, blue = false;
        for (int i = 0; i < 8; ++i) {
            if (a[i][0] == 'R') {
                int cnt = 1;
                for (int j = 1; j < 8; ++j) {
                    if (a[i][j] == 'R') cnt++;
                }
                if (cnt == 8) {
                    red = true;
                    break;
                }
            }
        }
        if (!red) {
            for (int j = 0; j < 8; ++j) {
                if (a[0][j] == 'B') {
                    int cnt = 1;
                    for (int i = 1; i < 8; ++i) {
                        if (a[i][j] == 'B') cnt++;
                    }
                    if (cnt == 8) {
                        blue = true;
                        break;
                    }
                }
            }
        }
        if (red) cout << "R" << endl;
        if (blue) cout << "B" << endl;
    }
 
}
 
 