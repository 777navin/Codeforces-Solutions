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
    
    long long sum = 0;
 
    map<long long, int> freq;
 
    int max_freq = 0;
 
    long long mx_v = 0;
 
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
 
        sum = sum + a;
 
        freq[a]++;
        
        // Keep track of the most frequent card
        if (freq[a] > max_freq) {
            max_freq = freq[a];
            mx_v = a;
        }
    }
    
    // O is the count of all cards EXCEPT the most frequent one
    int O = n - max_freq;
    
    // Calculate how many copies of the most frequent card we are forced to waste
    int dp_c = max(0, max_freq - O - 2);
    
    // Calculate the final max damage
    long long max_damage = sum - (long long)dp_c * mx_v;
    
    cout << max_damage << "
";
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