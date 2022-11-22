#include <bits/stdc++.h>
using namespace std;

int main() {
    bool is_hard = false;
    int n;
    cin>>n;
    for (int i = 0; i<n; i++) {
        int a;
        cin>>a;
        if(a) {
            is_hard = true;
        }
    }
    if (is_hard) {
        cout<<"HARD";
    } else {
        cout<<"EASY";
    }
    return 0;
}