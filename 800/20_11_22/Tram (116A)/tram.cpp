#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int on_tram = 0;
    int max_passengers=0;
    while(n) {
        int a,b;
        cin>>a>>b;
        on_tram+=b;
        on_tram-=a;
        if(on_tram > max_passengers) {
            max_passengers = on_tram;
        }
        n--;  
    }
    cout<<max_passengers;
    return 0;
}