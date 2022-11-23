#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
enum z {
    RIGHT, DOWN, LEFT, UP, UP_LEFT, UP_RIGHT, DOWN_LEFT, DOWN_RIGHT
};
int dx[] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[] = {1, -1, 2, -2, 2, -2, 1, -1};
 
int n, m;
 
bool valid(int i, int j) {
    return i >= 0 && j >= 0 && i < n && j < m;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int xx = 1, yy = 1;
        for (int i = 0; i < n; ++i) {
            bool pass = false;
            for (int j = 0; j < m; ++j) {
                pass = false;
                for (int k = 0; k < 8; ++k) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (valid(x, y)) pass = true;
                }
                if (!pass) {
                    xx = i + 1, yy = j + 1;
                    break;
                }
            }
            if (!pass) break;
        }
        cout << xx << " " << yy << endl;
    }
 
}