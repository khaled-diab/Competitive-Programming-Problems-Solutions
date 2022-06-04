#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    int t, x, y ,d;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x >> y >> d;
        if(abs(x-y) <= d){
            cout << "YES" << endl;
        } else cout << "NO"<< endl;
    }
}