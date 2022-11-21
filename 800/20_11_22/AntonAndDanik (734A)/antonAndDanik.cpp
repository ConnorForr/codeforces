#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;

    int anton=0;
    int danik=0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'A') {
            anton++;
        } else if(s[i] == 'D') {
            danik++;
        }
    }
 
    if(anton==danik) {
        cout<<"Friendship";
    } else if (anton>danik) {
        cout<<"Anton";
    } else {
        cout<<"Danik";
    }

    return 0;
}