#include <iostream>
#include <vector>
 
using namespace std;
 
const int mx = 200005;
vector<bool> is_number_prime(mx + 1, true);
 
 
// Precompute prime numbers using Sieve of Eratosthenes
void build_sieve() {
 
    is_number_prime[0] = is_number_prime[1] = false;
 
    for (int p = 2; p * p <= mx; p++) {
 
        if (is_number_prime[p]) {
 
            for (int i = p * p; i <= mx; i += p) {
 
                is_number_prime[i] = false;
 
            }
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    
    // The only possible winning card is n + 1
    // It wins if and only if it is a prime number
 
    
    if (is_number_prime[n + 1]) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // CRITICAL: You must call the sieve function here!
    build_sieve();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}