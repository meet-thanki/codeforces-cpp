#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Problem 2248A - You Delete, I Delete

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
    string input_str;
    cin >> input_str;

    vector<char> s(input_str.size());
    for(int i = 0; i < s.size(); ++i){
        s[i] = input_str[i];
    }

    /*Since Alice wants to make the string as large as possible: deleting the first 0 is optimal.
    Bob wants to minimise the string: deleting the first 0 is optimal*/
    for(int j = 0; j < s.size(); ++j){
        if(s[j] == '0'){
            s.erase(s.begin() + j);
            break; // j value remains same, and the shifted index is accounted for.
        }
    } // Alice's Turn done

    for(int k = 0; k < s.size(); ++k){
        if(s[k] == '1'){
            s.erase(s.begin() + k);
            break;
        }
    } // Bob's Turn done

    for(char bit: s){
        cout << bit;
    }
    cout << "\n";
}