 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    
    // If n is odd, the last element goes out of bounds.
    if (n % 2 != 0) {
        cout << "NO
";
        return;
    }
    
    int mini_ = INT_MAX;
    int maxi_ = INT_MIN;
    
    for (int i = 0; i < n; i++) {
 
        if ((i + 1) % 2 != 0) {
        
 
            mini_ = min(mini_, w[i]);
 
        } else
         {
            maxi_ = max(maxi_, w[i]);
        }
    }
    
    if (mini_ - maxi_ >= 2) {
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