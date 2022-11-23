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
int dx[] = {0, 1, 0, -1, -1, -1, 1, 1};
int dy[] = {1, 0, -1, 0, -1, 1, -1, 1};
 
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
        char a[8][8];
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> a[i][j];
            }
        }
        int x = 0, y = 0;
        for (int i = 1; i < 7; ++i) {
            for (int j = 1; j < 7; ++j) {
                bool pass = true;
                for (int k = 4; k <= 7; ++k) {
                    if (a[i + dx[k]][j + dy[k]] != '#') pass = false;
                }
                if (pass) {
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        cout << x+1 << " " << y+1 << endl;
    }
}