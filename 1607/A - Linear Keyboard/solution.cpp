/**
 * Problem Name: Linear Keyboard
 * Problem Link: https://codeforces.com/problemset/problem/1607/A
 * Platform: Codeforces
 */
 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string keyboard, s;
    cin >> keyboard >> s;
 
    // Map each character to its index on the keyboard
    unordered_map<char, int> pos;
    for (int i = 0; i < 26; ++i) {
        pos[keyboard[i]] = i;
    }
 
    // Calculate total time
    int total_time = 0;
    for (size_t i = 1; i < s.length(); ++i) {
        total_time += abs(pos[s[i]] - pos[s[i - 1]]);
    }
 
    cout << total_time << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}