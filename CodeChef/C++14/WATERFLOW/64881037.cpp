#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int gained = y * z;
        if(w + gained == x){
            cout << "filled" << endl;
        } else if(w + gained > x) {
            cout << "overflow" << endl;
        } else cout << "unfilled" << endl;
    }
}