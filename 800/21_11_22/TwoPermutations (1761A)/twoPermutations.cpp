#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,a,b;
        cin>>n>>a>>b;
        if ((a == b) && (b == n)) {
            cout<<"Yes"<<endl;
        } else if ((a + b + 2) <= n) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}