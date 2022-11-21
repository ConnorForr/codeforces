#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    int count = 0;
    int ka;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (a < 1) { 
            break; 
        }

        if (i == k) { 
            ka = a; 
        }

        if (i > k && a < ka) { 
            break; 
        }

        count++;
    }
    cout << count;
    return 0;
}