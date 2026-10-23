/*
=========================================================
Date        : 01-08-2026
Problem Name: K-Dominant Character
Platform    : Codeforces
Difficulty  : Medium (1400)
Tags        : Two Pointers, Implementation, Strings
 
Problem Summary:
Given a string s consisting of lowercase Latin letters, find the minimum 
integer k such that there exists at least one character c where every 
substring of s with length at least k contains c.
 
Key Observation:
A character c is guaranteed to appear in every substring of length k if and 
only if the maximum distance between any two consecutive occurrences of c 
(including string boundaries) is at most k.
=========================================================
*/
 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
3. APPROACH EXPLANATION
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 
1. Character Gap Analysis (Optimal)
• Intuition:
  To ensure character 'ch' appears in every window of size k, the distance 
  between any consecutive appearances of 'ch' cannot exceed k.
 
• Approach:
  For each character 'a' through 'z', record its 0-based indices in the string.
  Calculate gaps between consecutive indices, including distance from index -1 
  to first index, and from last index to length n. The max gap for 'ch' is its 
  required k. Take the minimum max-gap across all 26 characters.
 
• Why it Works:
  If a gap between occurrences of 'ch' is greater than k, a substring of 
  length k can fit inside that gap without containing 'ch'. Thus, max gap is 
  both necessary and sufficient for 'ch' to be k-dominant.
 
• Time Complexity (TC): O(N) - Single pass to find positions or calculate gaps.
• Space Complexity (SC): O(1) - Only array of size 26 needed for tracking.
*/
 
/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
4. FINAL APPROACH
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
• Why this approach is chosen:
  It achieves the theoretical minimum time complexity O(N) and optimal 
  space complexity O(1).
• Why it is better than previous ones:
  Directly computes the required k in a single linear pass over the string 
  without needing O(N log N) Binary Search on Answer.
*/
 
void solve() {
    string s;
    if (!(cin >> s)) return;
 
    int n = s.length();
    
    // Store the last seen index for each of the 26 lowercase English letters
    vector<int> last_pos(26, -1);
    
    // Store the maximum gap found so far for each character
    vector<int> max_gap(26, 0);
 
    for (int i = 0; i < n; ++i) {
        int char_idx = s[i] - 'a';
        max_gap[char_idx] = max(max_gap[char_idx], i - last_pos[char_idx]);
        last_pos[char_idx] = i;
    }
 
    // Account for the boundary gap from the last occurrence to the end of string (index n)
    int min_k = n;
    for (int c = 0; c < 26; ++c) {
        if (last_pos[c] != -1) {
            max_gap[c] = max(max_gap[c], n - last_pos[c]);
            min_k = min(min_k, max_gap[c]);
        }
    }
 
    cout << min_k << "
";
}
 
int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}