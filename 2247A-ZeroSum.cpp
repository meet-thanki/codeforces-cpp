#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Problem 2247A - Zero Sum

typedef long long ll;

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
    ll n;   
    cin >> n;
    ll sum = 0;

    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    /* by performing operations, one can only achieve ... -8, -4, 0, +4, +8, ... to the original sum. 
     thus any number other than multiple of 4 wont be able to reach 0 by performing above operations.
     finding the divisibility by 4 hence becomes the short and sweet solution.*/
    if(abs(sum)%4 == 0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}