#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Problem 2233A - AI Project Development

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
    vector<ll> c(4);
    for(int i = 0; i < 4; ++i){
        cin >> c[i];
    }
    ll n, x, y, z;
    n = c[0];
    x = c[1];
    y = c[2];
    z = c[3];

   ll tm_no_ai = (n + (x + y) -1)/(x + y); // standard CP trick to perform ceil divison

   ll tm_ai;
   if(n <= x*z){ // x*z correponds to number of lines of code written by maxim before or just when AI agent is ready, i.e Maxim completed first
        tm_ai = (n + x -1)/x; // to ceil
   }
   else{
        tm_ai = z + (n - x*z + ((x + 10*y) - 1))/(x + 10*y); // n - x*z correponds to the number of lines left when AI agent is ready. dividing by the increased speed and adding z gives the answer. 
        // similar ceiling trick used here. to give a/b ceiled value, we do (a + (b-1))/b.
   }

   cout << min(tm_no_ai, tm_ai) << "\n";
}