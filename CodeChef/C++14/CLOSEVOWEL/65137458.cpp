#include <bits/stdc++.h>

#define endl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long count = 0;
        char vowls[5] = {'a', 'e', 'i', 'o', 'u'};
        int diff[5];
        bool pass = false;
//        for (int i = 0; i < n; ++i) {
//            if(i == n-1)
//                break;
//            for (int j = 0; j < 5; ++j) {
//                if(j == 4)
//                    break;
//                if(abs(s[i] - vowls[j]) == abs(s[i] - vowls[j+1]) && s[i] - vowls[j] != 0){
//                    count++;
//                }
//
//            }
//        }
//        long long z = 1;
//        for (int i = 0; i < count; ++i) {
//            z = (z *2) %  (long long)(1e9 + 7);
//        }
//        cout << z << endl;
//        cout << (long long)powl(2, count) % (long long)(1e9 + 7) << endl;
        for (int i = 0; i < n; ++i) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u') {
                for (int j = 0; j < 5; ++j) {
                    diff[j] = abs(s[i] - vowls[j]);
//                    cout << "diff "<< diff[j] << "  ";
                }
                sort(diff, diff + 5);
                for (int j = 1; j < 5; ++j) {
                    if (abs(diff[j]) == abs(diff[0])) {
                        count++;
//                        cout <<"count:" <<count << endl;
                        pass = true;
                    }
                }
            }
        }
        long long z = 1;
        for (int i = 0; i < count; ++i) {
            z = (z *2) %  (long long)(1e9 + 7);
        }
        cout << z << endl;
//        (pass) ? cout << (long long)powl(2, count) % 100000007 << endl : cout << 1 << endl;
    }
}