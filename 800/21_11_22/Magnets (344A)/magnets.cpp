#include <bits/stdc++.h>
using namespace std;

// Must be a faster way to do this one but this is what I came up with right away..

int main() {
    int n;
    cin>>n;
    int tracker = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (i == 0) {
            tracker = x;
            count++;
        }
        if (tracker == 1 && x != 1) {
            tracker = x;
            count++;
        }

        if (tracker == 10 && x != 10) {
            tracker = x;
            count++;
        }
    }
    cout<<count;
    return 0;
}