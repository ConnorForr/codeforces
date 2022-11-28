#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};

    string new_s = "";
    for (int i = 0; i < s.size(); i++) {
        //90 is 'Z' in ASCII and 32 is the integer difference in ASCII between upper and lowercase values.
        char temp;
        if (s[i] <= 90) {
            temp = s[i] + 32;
        } else {
            temp = s[i];
        }
        bool is_vowel = false;
        for(int j = 0; j < (sizeof(vowels)/sizeof(vowels[0])); j++) {
            if (temp == vowels[j]) {
                is_vowel = true;
                break;
            }
        }

        if (is_vowel) {
            continue;
        } else {
            new_s += ".";
            new_s += temp;
        }
    }
    cout<<new_s;
    return 0;
}