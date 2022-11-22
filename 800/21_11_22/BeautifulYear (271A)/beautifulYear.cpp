#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    
    cin>>y;
    while (true) {
        y++;
        int w,x,y1,z;
        w = y / 1000;
        x = (y / 100) % 10;
        y1 = (y / 10) % 10;
        z = y % 10;
        if ((w == x) || (w == y1) || (w == z) || (x == y1) || (x == z) || (y1 == z)) {
            continue;
        }
        break;
    }
    cout<<y;
    return 0;
}