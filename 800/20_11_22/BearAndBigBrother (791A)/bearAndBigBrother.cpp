#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int count = 0;
    while (1) {
        if (a>b) {
            cout<<count;
            break;
        } else {
            a*=3;
            b*=2;
            count++;
        }
    }
    return 0;
}