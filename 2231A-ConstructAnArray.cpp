#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2231 - Construct an Array

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

    // Odd numbers are distinct themselves. the sum of adjacent numbers is always even, making everything unique as per requirements.
    for(long long j = 0; j < n; ++j){
        cout << (2*(j+1) - 1);
        if(j < (n-1)){
            cout << " ";
        }
    }
    cout << "\n";
}