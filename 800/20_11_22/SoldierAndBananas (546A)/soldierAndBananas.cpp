#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    for(int i=1;i<(w+1);i++) {
        cost+= i*k;
    }
    if ((cost-n)< 0) {
        cout<<0;
    } else {
        cout<<(cost-n);
    }
    return 0;
}