#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
 
using namespace std;
 
 
void solve() {
    int n, x, y;
 
 
    cin >> n >> x >> y;
 
 
    
int g = __gcd(x, y);  // Change this from std::gcd(x, y)    
            bool possible = true;
    
    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        if (val % g != i % g) {
            possible = false;
        }
    }
    
                 if (possible) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}