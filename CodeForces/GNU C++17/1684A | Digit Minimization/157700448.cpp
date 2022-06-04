#include <bits/stdc++.h>
 #define endl "\n"
 using namespace std;
 int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = n;
        int z = 0;
        vector<int> digits;
        while (x > 0) {
            int y = x % 10;
            z = z * 10 + y;
            x /= 10;
        }
        while (z > 0) {
            int y = z % 10;
            digits.push_back(y);
            z /= 10;
        }
        if (digits.size() == 2)
            cout << digits[1] << endl;
        else cout << *min_element(digits.begin(), digits.end()) << endl;
    }
}