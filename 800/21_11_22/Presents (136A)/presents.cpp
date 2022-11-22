#include <bits/stdc++.h>
using namespace std;

// This problem is worded extremely poorly to me. It is saying that the list given, each index i is the number of the person, and the input value is the value of the friend
// that the friend (who is index i) gave their present to. So (2 3 4 1) would mean the friend 1 gave a present to friend 2, etc. The goal is to output the friend value to 
// friend who gifted index i, that is (2 3 4 1) would be (4 1 2 3) since friend 4 gave friend 1 a present, friend 1 gave friend 2 a present. etc. 
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<(n+1); i++) {
        //take the value given from the input of friends and subtract one from that to make it into the index, and set the i value of the for loop to the array.
        int p;
        cin>>p;
        arr[p-1] = i;
    }

    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}