#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Problem 2229A - Slimes on a Line

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

    vector<ll> c(n);
    for(int i = 0; i<n; ++i){
        cin >> c[i];
    }
    ll y;
    ll max = *max_element(c.begin(), c.end());
    ll min = *min_element(c.begin(), c.end());
    // no. of operations required is maximum of no. of operations required for both max and min to reach y.
    ll ans = ((max-min + 1)/2);

    cout << ans << "\n";
}