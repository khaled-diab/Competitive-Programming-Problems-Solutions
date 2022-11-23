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
    while (t--) {
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a[0] < b[0]) cout << '>' << endl;
        else if (a[0] > b[0]) cout << '<' << endl;
        else {
            if (a[0] == 'S') {
                if (a.length() < b.length()) cout << '>' << endl;
                else if (a.length() > b.length()) cout << '<' << endl;
                else cout << '=' << endl;
            } else if(a[0] == 'L') {
                if (a.length() < b.length()) cout << '<' << endl;
                else if (a.length() > b.length()) cout << '>' << endl;
                else cout << '=' << endl;
            } else cout << '=' << endl;
        }
 
    }
 
}