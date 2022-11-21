#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int count=0;
    set<char> set_;

    for(int i=0;i<s.size();i++) {
        set_.insert(s[i]);
    }

    if (set_.size() % 2 != 0) {
        cout<<"IGNORE HIM!";
    } else {
        cout<<"CHAT WITH HER!";
    }

    return 0;
}