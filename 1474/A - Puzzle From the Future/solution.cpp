/*
=========================================================
Date        : 18-10-2026
Problem Name: A. Puzzle From the Future
Platform    : Codeforces
Difficulty  : 800
Tags        : Greedy, Constructive Algorithms, Strings
 
Problem Summary:
- Given a binary integer b of length n, we need to choose a binary integer a of length n.
- We form c by bitwise summing a and b without carrying over (so digits can be 0, 1, or 2).
- Then, we replace equal consecutive digits in c with a single digit to form d.
- We want to find a binary integer a such that d is maximized as a number.
 
Key Observation:
- To maximize d lexicographically and numerically from left to right, we should make the highest possible digit at each position (preferring 2, then 1, then 0).
- For the first position, we can always choose a[0] = 1, so c[0] = b[0] + 1, resulting in either 2 or 1.
- For subsequent positions i > 0, to avoid consecutive equal digits in d, a[i] must be chosen such that b[i] + a[i] is NOT equal to the actual digit we chose at position i - 1.
=========================================================
*/
 
/*
=========================================================
APPROACH EXPLANATION
=========================================================
 
1. Greedy Approach
• Intuition: Since we want d to be as large as possible, we process from left to right and greedily try to put '2' at every position if it doesn't violate the no-consecutive-equal-digits rule.
• Approach: For the first index, set a[0] = '1'. For each subsequent index i, try setting a[i] = '1' first. If b[i] + '1' equals the digit we placed at i-1, fall back to a[i] = '0'.
• Why it Works: Prioritizing a larger digit at the most significant positions always yields a larger number.
• Time Complexity (TC): O(n) per test case, since we iterate through the string of length n once.
• Space Complexity (SC): O(n) to store and construct the resulting string a.
 
=========================================================
FINAL APPROACH CHOSEN
=========================================================
- The greedy approach is chosen because making optimal local choices from left to right ensures the globally largest resulting string d. It runs in linear time, easily fitting within the 1-second time limit for n = 10^5.
=========================================================
*/
 
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string b;
    cin >> b;
 
    string a = "";
    int last_digit = -1;
 
    for (int i = 0; i < n; ++i) {
        int b_val = b[i] - '0';
        
        // Try setting a[i] = 1 first to maximize the sum (b_val + 1)
        if (b_val + 1 != last_digit) {
            a += '1';
            last_digit = b_val + 1;
        } else {
            // If it equals the previous digit, we must choose a[i] = 0 to avoid duplicates
            a += '0';
            last_digit = b_val + 0;
        }
    }
 
    cout << a << "
";
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