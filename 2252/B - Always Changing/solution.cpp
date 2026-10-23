 #include <bits/stdc++.h> // include all standard headers
 using namespace std;
 
 #define ll long long
 #define ld long double
 #define pii pair<int, int>
 #define mp make_pair
 #define pb push_back
 #define eb emplace_back
 #define fi first
 #define se second
 
 const int INF = 1e9;
 const ll INFLL = 1e18;
 const int MOD = 1e9 + 7;
 
 void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }
 
    // Count maximum possible alternating blocks (M0 for '0', M1 for '1')
    int m0 = 0, m1 = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            if (s[i] == '0') m0++;
            else m1++;
        }
    }
 
    // D represents the difference in total counts
    int D = c0 - c1;
    
    // If the difference between 0s and 1s is strictly greater than 2, 
    // it's impossible to balance out the deletions to alternate perfectly.
    if (abs(D) > 2) {
        cout << -1 << "
";
        return;
    }
 
    int max_len = -1;
    
    // delta represents the difference between the 0s and 1s in the optimal final alternating string
    for (int delta = -1; delta <= 1; delta++) {
        // The difference in deleted characters must be <= 1
        if (abs(D - delta) <= 1) {
            int k1 = min(m1, m0 - delta);
            int k0 = k1 + delta;
            
            if (k0 >= 0 && k1 >= 0) {
                max_len = max(max_len, k0 + k1);
            }
        }
    }
 
    if (max_len == -1) {
        cout << -1 << "
";
    } else {
        cout << n - max_len << "
";
    }
}
 
 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     
     // Declare any additional variables here
     
     int t; // number of test cases
     cin >> t;
     
     while (t--) {
         // write your code here for each test case
         solve();
         
         
     }
     
     return 0;
 }