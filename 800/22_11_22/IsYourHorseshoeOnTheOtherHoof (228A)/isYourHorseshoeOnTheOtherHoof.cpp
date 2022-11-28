#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);
    int count = 0;
    for(int i = 0; i < 3; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }
    }
    cout<<count;
    return 0;
}