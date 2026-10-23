/**
 * Problem   : A. Turn Into a Palindrome
 * Contest   : Codeforces Round 1123 (Div. 2)
 * URL       : https://codeforces.com/contest/2267/problem/A
 * Date      : 25-09-2026
 * 
 * Time Complexity  : O(n) per test case -> O(sum of n) overall
 * Space Complexity : O(1) auxiliary space
 */
 
#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    char c;
    if (!(cin >> n >> c)) return;
    
    string s;
    cin >> s;
    
    int m = 0;
 
    for (int i = 0; i < n / 2; ++i) {
 
        char l = s[i];
 
        char r = s[n - 1 - i];
 
        
        if (l == r) {
          
            continue;
 
        } else if (l == c || r == c) {
            
            m += 1;
        } else {
            m += 2;
        }
    }
    
    cout << m << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
            
        }
    }
    return 0;
 
 
}