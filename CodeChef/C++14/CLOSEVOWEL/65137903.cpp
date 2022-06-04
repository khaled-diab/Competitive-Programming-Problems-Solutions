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
        string s;
        cin >> s;
        long long count = 0;
        char vowls[5] = {'a', 'e', 'i', 'o', 'u'};
        int diff[5];
        for (int i = 0; i < n; ++i) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u') {
                for (int j = 0; j < 5; ++j) {
                    diff[j] = abs(s[i] - vowls[j]);
                }
                sort(diff, diff + 5);
                for (int j = 1; j < 5; ++j) {
                    if (abs(diff[j]) == abs(diff[0])) {
                        count++;
                    }
                }
            }
        }
        long long z = 1;
        for (int i = 0; i < count; ++i) {
            z = (z *2) %  (long long)(1e9 + 7);
        }
        cout << z << endl;
    }
}