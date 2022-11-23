#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(v)          v.begin(), v.end()
#define debug(x)        cout << #x << " is " << x << endl
#define pow(n, m)       (int)powl(n, m)
#define clr(x, value)    memset(x, value, sizeof(x))
 
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, h, m;
        cin >> n >> h >> m;
        int s = 60 * h + m;
        int sleep = INT_MAX;
        int minsDay = 24 * 60;
        for (int i = 0; i < n; ++i) {
            int ah, am;
            cin >> ah >> am;
            int a = 60 * ah + am;
            int diff = s - a;
            if (s <= a) {
                sleep = min(sleep, abs(diff));
            } else {
                sleep = min(sleep, minsDay - abs(diff));
            }
        }
        cout << sleep / 60 << " " << sleep % 60 << endl;
    }
 
}