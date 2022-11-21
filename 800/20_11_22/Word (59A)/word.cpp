#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int up_cnt=0;
    int low_cnt=0;
    for(int i=0;i<s.size();i++) {
        if (s[i] > 90) {
            low_cnt++;
        } else {
            up_cnt++;
        }
    }

    if (low_cnt>=up_cnt) {
        for(int i=0;i<s.size();i++) {
            s[i] = tolower(s[i]);
        }
    } else {
        for(int i=0;i<s.size();i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}