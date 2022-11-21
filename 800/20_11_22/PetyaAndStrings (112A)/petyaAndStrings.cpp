#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;

    int i=0;
    while (a[i]) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        i++;
    }
    
    if (a>b) {
        cout << 1;
    }
    if (a<b) {
        cout << -1;
    }
    if (a==b) {
        cout << 0;
    }
    return 0;
}