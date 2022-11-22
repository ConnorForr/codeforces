#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 1; i < (n + 1); i++) {
        if ((n == i) && (i%2 == 1)) {
            cout<<"I hate it";
        } else if ((n == i) && (i%2 == 0)){
            cout<<"I love it";
        } else if (i % 2 == 0) {
            cout<<"I love that ";
        } else {
            cout<<"I hate that ";
        }
    }
    return 0;
}