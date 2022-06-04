#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int d[n];
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> d[i];
            if(d[i] >= 1000)
                count++;
        }
        cout << count << endl;
    }
}