#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p;
    cin>>n>>p;

    set<int> set1;

    while (p--) {
        int a;
        cin>>a;
        set1.insert(a);
    }

    cin>>p;

     while (p--) {
        int a;
        cin>>a;
        set1.insert(a);
    }

    for (int i = 1; i<=n; i++) {
        if(!(set1.find(i) != set1.end())) {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}