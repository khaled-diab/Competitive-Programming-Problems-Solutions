#include "bits/stdc++.h"
 
#pragma GCC optimize("Ofast")
 
using namespace std;
 
#define endl            "\n"
#define all(x)          x.begin(), x.end()
#define debug(x)        cout << #x << " is " << x << endl
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a,a+n);
        bool pass = false;
        for (int i = 0; i < n -1; ++i) {
            if(a[i] < a[i+1]) continue;
            else {
                pass = true;
                break;
            }
        }
        if(pass) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
 
 
}