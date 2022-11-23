#include <bits/stdc++.h>
#define N 200010
#define endl '\n'
#define ll long long
#define PII pair<int, int>
using namespace std;
string str;
void solve() {
    ll n, a[N] = { 0 }, b[N] = { 0 }, sum = 0, maxs = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        sum += b[i];
        maxs = max(maxs, b[i]);
    }
    cout << sum - maxs << endl;
}
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}