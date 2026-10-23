#include <iostream>
#include <vector>
#include <string>
#include <cctype>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<bool> av(26, false);
 
    for (int i = 0; i < n; ++i) {
 
        string w;
 
        cin >> w;
 
        // The problem guarantees initial words are lowercase
        av[toupper(w[0]) - 'A'] = true;
 
    }
 
    bool possible = true;
 
    for (int i = 0; i < m; ++i) {
 
        string a;
 
        cin >> a;
 
        // The problem guarantees abbreviations are uppercase
        for (char c : a) {
 
            if (!av[c - 'A']) {
                possible = false;
            }
        }
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
    // Fast I/O for competitive programming
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