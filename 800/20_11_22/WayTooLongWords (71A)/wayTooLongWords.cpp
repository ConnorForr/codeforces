#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        int sl = s.size();

        if (sl < 11) {
            cout << s << "\n";
        } else {
            cout << s[0] << sl - 2 << s[sl - 1] << "\n";
        }
    }
    return 0;
}