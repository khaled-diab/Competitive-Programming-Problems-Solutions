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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll sum = 0;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'R') {
                sum += n - i - 1;
                v.push_back(i - (n - 1 - i));
            } else {
                v.push_back((n - 1 - i) - i);
                sum += i;
            }
        }
        sort(all(v), greater<>());
        for (int i = 0; i < n; ++i) {
            sum = max(sum, sum + v[i]);
            cout << sum << " ";
        }
        cout << endl;
    }
 
}