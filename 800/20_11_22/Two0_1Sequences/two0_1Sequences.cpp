#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t) {
        int n,m;
        string a,b;

        cin>>n>>m>>a>>b;
        bool same = true;
        for(int i=1;i<b.size();i++) {
            if(a[i+n-m] != b[i])  {
                same = false;
                break;
            }
        }

        if (!same) {
            cout<<"NO"<<endl;
            t--;
            continue;
        }

        for(int i=0; i<(n-m+1);i++) {
            if(a[i] == b[0]) {
                same = false;
            }
        }

        if (!same) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}