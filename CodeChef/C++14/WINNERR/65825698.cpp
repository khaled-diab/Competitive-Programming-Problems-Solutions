#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;
        if(max(pa,pb) > max(qa, qb)) cout << "Q" << endl;
        else if(max(pa,pb) == max(qa, qb)) cout <<"TIE" << endl;
        else cout << "P" << endl;
    }
}


