#include <bits/stdc++.h>
 #define endl "\n"
using namespace std;
  int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    string x;
    while(t--){
        cin >> x;
        int sum = x[0] + x[1] + x[2], sum2 = x[3] + x[4] + x[5];
         if(sum == sum2){
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}