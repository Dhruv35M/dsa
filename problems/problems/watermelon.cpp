#include <bits/stdc++.h>
using namespace std;

bool equallyDividable(int w) {
    int ans = w/2;
    if(ans*2 == w) return 1;
    return 0;
}

int main() {
    int w = 0;
    cin>>w;
    
    equallyDividable(w) ? cout<<"YES" : cout<<"NO";

    return 0;
}