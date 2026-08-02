#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2230A - Optimal Purchase

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    vector<long long> c(3);
    for(int i = 0; i < 3; ++i){
        cin >> c[i];
    }

    long long d, e;
    d = c[0]/3;
    e = c[0]%3;

    /* three options: 1. individual groups for all.
    2. groups of 3 for groups possible - b dollars and individual groups - a. 
     3. group key for every single group */
    cout << min({c[0]*c[1], d*c[2] + e*c[1], (d+1)*c[2]}) << "\n";
}