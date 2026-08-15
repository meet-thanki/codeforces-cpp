#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2218C - The 67th Permutation Problem

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

   /* Since the smallest element is 1, and largest is 3n, the second largest is (3n-1)th element which should be present to maximize median
   thus {1, 3n-1, 3n} is one triplet. Similarly, other triplets are formed in the following order:
   {2, 3n-3, 3n-2}, ..., {n, n+1, n+2} */
    ll k = 3*n;
    for(int i = 1; i <= n; ++i){
        cout << i << " " << k-1 << " "<< k << " "; 
        k -= 2;
    }
    cout << "\n";
}