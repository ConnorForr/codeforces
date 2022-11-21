#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    string s;
    cin>>s;
    int length_of_arr=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            continue;
        }else{
            // a - '0' is equivalent to ((int)a) - ((int)'0'), which means the ascii values of the characters are subtracted from each other. 
            // Since 0 comes directly before 1 in the ascii table (and so on until 9), the difference between the two gives the number that 
            // the character a represents.
            arr[length_of_arr++]=s[i]-'0';
        }
    }
    // This is adding the length of the array to the array which is changing the memory address of the array to the end of it because sort takes 
    // sort(starting mem address, end mem address).
    sort(arr, arr+length_of_arr);

    for(int i=0; i<length_of_arr; i++) {
        if (i == length_of_arr - 1) {
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<'+';
    }
    return 0;
}