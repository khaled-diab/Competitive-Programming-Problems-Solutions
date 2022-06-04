#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        double x, y;
        cin >> x >> y;
        cout << ceil((y-x)/8) << endl;
    }
}