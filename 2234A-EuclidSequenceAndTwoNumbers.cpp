#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem 2234A - Euclid, Sequence and Two Numbers

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
    cin >> n; // n always greater than or equal to 2

    vector<long long> c(n);
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }

    // whenever using the modulus operator:
    /* a%b = c (say). Here c < b. also a>b
    thus a>b>c*/

    sort(c.begin(), c.end()); // this sorts the vector in ascending order. this puts the bigger numbers at the end.
    int count = 0;
    if(n == 2){
        cout << c[1] << " " << c[0] << "\n";
        return;
    }

    bool valid = true;
    for(int i = 0; i < n-2 ; ++i){
        if(c[i+1] == 0){ // avoid division by 0 error
            valid = false;
            break;
        }

        if(c[i] != c[i+2]%c[i+1]){
            valid = false;  
            break;
        }
    }
    if(valid){
        cout << c[n-1] << " " << c[n-2] << "\n"; // to account for indexing, extra negative signs
    }
    else{
        cout << "-1\n"; // escape character \n necessary to avoid confusion 
    }
}