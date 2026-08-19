#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2229B - Absolute Cinema

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

    vector<ll> a(n);
    vector<ll> b(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    for(int j = 0; j < n; ){
        if(a[j] > b[j]){ // it is preferrable for the larger elements to be stored in b.
            a.erase(a.begin() + j);
            a.insert(a.begin() + j, b[j]);

            b.erase(b.begin() + j);
            b.insert(b.begin() + j, a[j]);

            continue;
        }
        j++;
    }   
    
    ll bsum = 0;
    for(int k = 0; k<n; k++){
        bsum += b[k];
    }

    cout << *max_element(a.begin(), a.end()) + bsum << "\n"; // dereferencing
}