#include <bits/stdc++.h>
using namespace std;

// Problem 2254A - Riptide

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
    vector<ll> d(3);
    for(int i = 0; i < 3; ++i){
        cin >> d[i];
    }

    ll a, b, c;
    a = d[0];
    b = d[1];
    c = d[2];

    ll max_num = max({a, b, c});
    ll min_num = min({a, b, c});
    int count = 0;

    while(1){
        if(d[0] == d[1] || d[1] == d[2] || d[2] == d[0]){
            break;
        }

        sort(d.begin(), d.end()); // sorting everytime is important as the new numbers formed after addition and subtraction could have the max and min elements changed.

        d[0]++;
        d[2]--;
        count++;
    }
    cout << count << "\n";
}