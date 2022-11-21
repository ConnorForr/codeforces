#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    //ASCII values for uppercase letters end at 90
    if (s[0] > 90){
        //ASCII values of letters uppercase and lowercase differ by 32.
        s[0] = s[0] - 32;
    }
    cout<<s;
    return 0;
}