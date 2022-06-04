#include<bits/stdc++.h>
 
using namespace std;
#define endl "\n"
 
int main() {
//    freopen("input.in"," r ",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, count2, result;
    string a;
    int m = (int) powl(10, 9) + 7;
    cin >> t;
    while (t--) {
        result = 1;
        count2 = 0;
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            if (a[i] == 'c' || a[i] == 'g' || a[i] == 'l' || a[i] == 'r') count2++;
        }
        for (int i = 1; i <= count2; i++) {
            result = (result *2)%m;
        }
        cout << result << endl;
    }
}
