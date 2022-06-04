#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    int t, n, pos;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        pos = 0;
        cin >> n;
        if(n%2 == 0){
            pos = (n/2);
        } else
            pos = (n/-2)-1;
        cout << pos << endl;
    }
}