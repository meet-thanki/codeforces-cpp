/*This day marks the journey of me solving codeforces questions. I have used a ton of hints for this question.
However, I shall continue to upskill myself and do questions on my own once I get the hang of this.*/

#include <iostream>
#include <vector> 
using namespace std;

void solve();

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // these lines are speed boosters in C++, and prevent from getting a TLE (time limit exceeded)

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int k;
    cin >> k;

    vector<int> c(k);
    int count_ge_2 = 0;
    bool has_ge_3 = false;

    for(int i = 0; i < k; ++i){ // ++i refrains from making a copy variable, hence making the code faster. i++ and ++i have same outputs
        cin >> c[i];

        if(c[i] >= 2){
            count_ge_2++;
        }

        if(c[i] >= 3){
            has_ge_3 = true;
        } 

    } 
        if(count_ge_2 >= 2 || has_ge_3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    
}