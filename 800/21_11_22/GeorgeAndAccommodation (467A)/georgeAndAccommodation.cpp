#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0;
    while (n--) {
        int p, q;
        cin>>p>>q;
        if ((q-p) > 1) {
            count++;
        }
    }
    cout<<count;
    return 0;
}