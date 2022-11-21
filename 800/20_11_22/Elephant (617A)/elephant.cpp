#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    if (x<=5) {
        cout<<1;
    } else {
        x--;
        cout<<((x/5) + 1);
    }
    return 0;
}