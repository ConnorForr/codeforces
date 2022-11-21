#include <bits/stdc++.h>
using namespace std;

int main() {
    int pos;
    for (int i = 1; i < 26; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            pos = i;
            break;
        }
    }

    int ans = 0;

    //checks for which column it is in and will add a move(s) depending on where it is.
    if (pos % 5 == 1 || pos % 5 == 0) {
        ans += 2;
    } else if (pos % 5 == 2 || pos % 5 == 4) {
        ans += 1;
    }

    // Checks for which row it is in and will add a move(s) depending on where it is.
    pos--;
    if (pos / 5 < 1 || pos / 5 >= 4) {
        ans += 2;
    } else if (pos / 5 < 2 || pos / 5 >= 3) {
        ans += 1;
    }

    cout << ans;
    return 0;
}