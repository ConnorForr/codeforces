#include <bits/stdc++.h>
using namespace std;

int main() {
    float n, m, a;
    cin>>n>>m>>a;

    int amt_x = 0;
    int amt_y = 0;

    if ((n/a) > 1) {
        amt_x = (n/a);
    } else {
        amt_x++;
    }

    if ((m/a) > 1) {
        amt_y = (m/a);
    } else {
        amt_y++;
    }

    cout<<(amt_x * amt_y);

    return 0;
}