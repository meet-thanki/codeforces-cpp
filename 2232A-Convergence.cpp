#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2232A - Convergence
/*Used expert help in this problem*/

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
    long long n;
    cin >> n;

    vector<long long> c(n);
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }

    sort(c.begin(), c.end());
    long long midpoint = n/2;

    long long target = c[midpoint];
    long long left = 0, right = 0;

    for(long long i = 0; i < n; ++i){
        if(c[i] < target){
            left++;
        }
        else if(c[i] > target){
            right++;
        }
    }
    cout << max(left, right) << "\n";
}   