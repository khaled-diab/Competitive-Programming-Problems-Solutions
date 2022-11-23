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
        string s[8];
        for (int i = 0; i < 8; ++i) {
            cin >> s[i];
        }
        string x = "RRRRRRRR";
        bool red = false;
        for (int i = 0; i < 8; ++i) {
            if(s[i]==x) {
                red = true;
                break;
            }
        }
        cout << (red ? "R" : "B") << endl;
    }
 
}