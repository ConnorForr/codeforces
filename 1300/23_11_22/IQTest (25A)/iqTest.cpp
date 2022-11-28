#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int remainder;
    int index = 1;
    int flip = 0;
    for(int i = 1; i <= n; i++) {
        int a;
        cin>>a;
        if (i == 1) {
            remainder = a%2;
        } else if (a%2 != remainder) {
            remainder = a%2;
            index = i;
            flip++;
        }
    }

    if (flip == 1 && index == 2) {
        cout<<1;
    } else if (flip == 1) {
        cout<<index;
    } else {
        cout<<(index - 1);
    }
    return 0;
}