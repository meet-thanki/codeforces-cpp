// This is to notify the reader that I was not getting a commit out of this file. So I had to edit to commit again. (August 19, 2026)

#include <bits/stdc++.h>
using namespace std;

// Problem 2256A - Three Numbers on the Blackboard

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
    vector<ll> c(3);
    
    for(int i = 0; i < 3; i++){
        cin >> c[i];
    }

    /* let the 3 numbers be sorted such that a <= b <= c. 
    The median of these numbers is b.
    
    First Operation: The only logical choice is to replace the largest number with the sum of the other two, to reduce the range.
    Thus new number set becomes: a, b, a+b. (a+b becomes largest as a, b != 0)
    Interestingly, range of above triplet is b and its median is again b.
    
    Consider x <= y <= z to be the general triplet for upcoming operations. An operation keeps 
    two numbers say u <= v (u and v both belong to the given triplet {x, y, z}) and replaces the third 
    with the sum u+v.

    Second and Further Operations: The new median is v and the range is v too. 
    Possible values of v: either equal to the old median y or the old maximum z.
    Thus v >= y. This proves that further operations cannot decrease the value of median. 
    So, the range can never decrease past b.

    Conclusion: We either perform 0 or 1 operations for elements a <= b <= c.
    For 0 operations: Range is just c-a
    For 1 operation: Range is equal to the median b.
    */
    sort(c.begin(), c.end());
    cout << min(c[2]-c[0], c[1]) << "\n";
}