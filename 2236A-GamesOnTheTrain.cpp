#include <iostream>
#include <vector>
#include <algorithm> // required for using max_element and min_element
using namespace std;

// Problem 2236A - Games On The Train

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
    int n;
    cin >> n;

    vector<int> c(n);
    for(int i = 0; i<n ; ++i){
        cin >> c[i];
    }
    int maxC = *max_element(c.begin(), c.end());
    int minC = *min_element(c.begin(), c.end()); // reading the minimum and maximum values after user input.


    vector<int> x(n);
    for(int j = 0; j<n; ++j){
        x[j] = maxC - c[j] + 1;
    }
    int maxX = *max_element(x.begin(), x.end());

    // vector<int> h(n);
    // for(int k = 0; k < n; ++k){
    //     h[k] = c[k] + x[k];
    // }  // --> this was an unnecessary block of code

    // cout << (maxC - minC + 1) << "\n";
    cout << maxX << "\n";

    /*The commented out lines may also be used*/
}