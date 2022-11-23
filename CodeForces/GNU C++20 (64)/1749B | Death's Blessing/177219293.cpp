#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        int arr[n+1]{}, val[n+1]{};
        for(int i = 0; i < n; i++)
            cin >> arr[i];
 
        for(int i = 0; i < n; i++)
            cin >> val[i];
 
        int l = 0, r = n - 1, res(0);
        while(l < r) {
            if(val[l] <= val[r]) {
                res += val[l] + arr[l];
                l++;
            }
            else {
                res += val[r] + arr[r];
                r--;
            }
        }
        res += arr[l];
        cout << res << '\n';
    }
    return 0;
}