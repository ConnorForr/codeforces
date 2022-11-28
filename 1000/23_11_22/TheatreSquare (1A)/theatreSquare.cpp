#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin>>n>>m>>a;

    long long amt_x = 0;
    if ((n/a) > 0 && (n%a) != 0){
        amt_x += (n/a) + 1;
    } else if ((n/a) > 0) {
        amt_x += (n/a);
    } else {
        amt_x++;
    }

    long long amt_y = 0;
    if ((m/a) > 0 && (m%a) != 0){
        amt_y += (m/a) + 1;
    } else if ((m/a) > 0) {
        amt_y += (m/a);
    } else {
        amt_y++;
    }

    cout<<(amt_x * amt_y);
    return 0;
}