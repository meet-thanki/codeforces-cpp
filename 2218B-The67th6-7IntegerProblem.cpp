#include <bits/stdc++.h>
using namespace std;

// Problem 2218B - The 67th 6-7 Integer Problem
// Easiest and fastest problem I solved up till now on Codeforces

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
    vector<ll> a(7);

    for(int i = 0; i<7; i++){
        cin >> a[i];
    }

    /* The sum can be maximised only when the smallest numbers are negated. so, sort the array and 
    negate the first 6 elements. get the sum, which is the answer.*/

    sort(a.begin(), a.end());

    ll sum = 0;
    for(int i = 0; i < 7; i++){
        if(i <= 5){
            sum += -1*a[i];
        }
        else{
            sum += a[i];
        }
    }

    cout << sum << "\n";
}