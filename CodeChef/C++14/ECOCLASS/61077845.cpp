#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    int t, n, count =0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        int s[n] , d[n];
        for (int j = 0; j < n; ++j) {
            cin >> s[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> d[j];
            if(s[j] == d[j])
                ++count;
        }
        cout << count << endl;
        count =0;
    }
}