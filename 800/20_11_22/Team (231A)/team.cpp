#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    while (n) {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) > 1) {
            ans++;
        }
        n--;
    }
    cout << ans;
    return 0;
}