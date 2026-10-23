#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
 
    int navin; cin >> navin;
 
    
 
    vector<long long> a(navin);
 
    for (int i = 0; i < navin; ++i) {
        cin >> a[i];
    }
    
    bool possible = true;
    for (int i = 0; i < navin - 1; ++i) {
        
 
 
        long long chota = (i == 0) ? 1 : a[i-1] + 1;
        
        if (a[i] < chota) {
            possible = false;
            break;
        }
        
        // Pass the excess books to the next stack
        long long zyda = a[i] - chota;
        a[i+1] += zyda;
        a[i] = chota;
    }
    
    // Check the final boundary condition for the last element
    if (navin > 1 && a[navin-1] <= a[navin-2]) {
        possible = false;
    }
    
    if (possible) {
 
        
        cout << "YES
";
    } else {
        cout << "NO
";
    }
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