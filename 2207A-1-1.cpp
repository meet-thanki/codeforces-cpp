#include <bits/stdc++.h>
using namespace std;

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
    
    string inp_str;
    cin >> inp_str;

    vector<char> c(inp_str.size());
    for(int i = 0; i < n; ++i){
        c[i] = inp_str[i];
    }

    /* Here, zeros that are adjacent to each other will never become ones, and it is also not possible to create adjacent zeros.
    Thus, we look at ones having gap of at most one zero (or convert to 0) and return no. of 1's as minimum value.
    By converting these zeros to 1's, we again count no. of 1's as maximum value.*/
    for(int i = 1; i < n-1; ++i){
        if (c[i-1] == '1' && c[i+1] == '1'){
            c[i] = '1';
        }
    }

    int ans1 = 0;
    for(int i = 0; i < n; ++i){
        if(c[i] == '1'){
            ans1 += 1;
        }
    }

    for(int i = 1; i< n-1; ++i){
        if(c[i-1] == '1' && c[i+1] == '1'){
            c[i] = '0';
        }
    }

    int ans0 = 0;
    for(int i = 0; i < n; ++i){
        if(c[i] == '1'){
            ans0 += 1;
        }
    }

    cout << ans0 << " " << ans1 << "\n";
}