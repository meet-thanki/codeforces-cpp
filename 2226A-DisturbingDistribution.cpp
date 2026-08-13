#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2226A - Disturbing Distribution

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
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> c(n);
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }

    /* for any two integers a>1 and b>1, a*b >= a+b. So it is better to never have two number greater than one simulataneously for removal.
     Thus, we delete them in separate operations. We thus group only with ones as the multiplication does not change. */
    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(c[i] > 1){
            ans += c[i];
        }
    }
    if(c.back() == 1){ // the trailing 1 needs to be removed in a separate operation.
        ans++;
    }
    
    cout << ans << "\n";
}