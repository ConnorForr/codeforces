#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        int a;
        cin>>a;
        arr[i] = a;
    }

    int max_val= arr[0];
    int max_index = 0;
    int min_val = arr[0];
    int min_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= min_val) {
            min_val = arr[i];
            min_index = i;
        } 
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        } 
    }

    int moves = 0;

    if (max_index > min_index) {
        moves += max_index;
        moves += (n - min_index - 2);
    } else {
        moves += max_index;
        moves += (n - min_index - 1);
    }

    cout<<moves;
    return 0;
}