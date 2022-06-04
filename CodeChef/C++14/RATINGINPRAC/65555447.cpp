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
        int p[n];
        int x[n];
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            x[i] = p[i];
        }
        sort(x, x + n);
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            if(x[i] != p [i]){
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES":"NO") << endl;
    }
}





