#include <iostream>
using namespace std;

// Problem 2225A - A Number Between Two Others

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
    ll x, y;
    cin >> x >> y;

    /*Since z must be multiple of x and strictly between x and y, the absolute smallest candidate for z is 2x.
    Thus, if 2x does not lie between x and y, we print NO. Otherwise, we print YES.*/

    if(y <= 2*x){
        cout << "NO" << "\n"; // if y == 2x, then z does not lie between x and y.
    }
    else{
        cout << "YES" << "\n";
    }
}