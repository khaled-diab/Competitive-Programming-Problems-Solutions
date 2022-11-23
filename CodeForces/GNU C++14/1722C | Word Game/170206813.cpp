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
        string a[n];
        map<string, int> mp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mp[a[i]]++;
        }
        string b[n];
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            mp[b[i]]++;
        }
        string c[n];
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            mp[c[i]]++;
        }
        int s1 = 0, s2 = 0, s3 = 0;
        for (int i = 0; i < n; ++i) {
            if (mp[a[i]] == 1) s1 += 3;
            else if (mp[a[i]] == 2) s1 += 1;
        }
        for (int i = 0; i < n; ++i) {
            if (mp[b[i]] == 1) s2 += 3;
            else if (mp[b[i]] == 2) s2 += 1;
        }
        for (int i = 0; i < n; ++i) {
            if (mp[c[i]] == 1) s3 += 3;
            else if (mp[c[i]] == 2) s3 += 1;
        }
        cout << s1 << " " << s2 << " " << s3 << endl;
    }
 
}