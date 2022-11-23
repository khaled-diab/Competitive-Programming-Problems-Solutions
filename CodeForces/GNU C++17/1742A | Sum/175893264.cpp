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
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b ==  c ) cout << "YES" << endl;
        else if(a+c == b ) cout << "YES" << endl;
        else if (b+c == a ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
 
}