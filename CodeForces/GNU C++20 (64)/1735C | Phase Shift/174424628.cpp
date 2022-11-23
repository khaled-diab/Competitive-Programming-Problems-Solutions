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
        string ans;
        int done[26];
        for (int &i: done) {
            i = -1;
        }
        bool used[26] = {};
        for (int i = 0; i < n; ++i) {
            int x = s[i] - 'a';
            if (done[x] == -1) {
                for (int j = 0; j < 26; ++j) {
                    if (j != x) {
                        if (!used[j]) {
                            done[x] = j;
                            int xx = -1;
                            int ff = 0;
                            int k = j;
                            while (k > -1) {
                                ff++;
                                k = done[k];
                                if (k == j) {
                                    xx = ff;
                                    break;
                                }
                            }
                            if (xx == -1 || xx == 26) {
                                used[j] = true;
                                break;
                            } else {
                                continue;
                            }
                        }
                    }
                }
            }
            char ch = char(done[x] + 'a');
            ans += ch;
        }
        cout << ans << endl;
    }
 
}