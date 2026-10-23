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
 
    ll a[3];
 
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a, a + 3);
    
   
    
    
    ll mr = min(a[2] - a[0], a[1]);
 
    
    cout << mr << "
"
    ;
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
    
    int t; 
    cin >> t;
    
    while (t--) {
        // write your code here for each test case
        solve();
        
        
    }
    
    return 0;
}