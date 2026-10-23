#include <bits/stdc++.h> // include all standard headers
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        // write your code here for each test case
       int a, b;
    cin >> a >> b;
 
    int m = min(a, b);
    int mx = max(a, b);
 
    cout << m << " " << mx << endl;
    }
    
    return 0;
}