#include <iostream>
using namespace std;

// Problem 2234B - Palindrome, Twelve and Two Terms

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
    long long n; // long long format is necessary. using int causes integer overflow
    cin >> n;
    // Here in any case n cannot be equal to 10 as n = 12(k-1) + 22 when a becomes 10. k would have to be 0 and b becomes negative.
    if(n == 10){
        cout << "-1\n";
        return;
    }
    long long a, b;
    a = n%12;
    b = (n-a);

    if(a == 10){ //subtract 12 from b and give it to a -> makes a = 22.
        a += 12;
        b -= 12;
    }

    cout << a << " " << b << "\n";
}