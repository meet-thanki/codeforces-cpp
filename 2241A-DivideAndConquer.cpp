#include <iostream>
#include <vector>
using namespace std;

// Problem 2241A - Divide and Conquer

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
    int x, y, z;

    vector<int> c(2);
    for(int i = 0; i < 2; ++i){
        cin >> c[i]; // here c[0] is x and c[1] is y
    }
    x = c[0];
    y = c[1];

    if(y != 0){
    if(x%y == 0){
        cout << "YES\n";
        z = x/y;
    }
    else{
        cout << "NO\n";
    }
    }
}