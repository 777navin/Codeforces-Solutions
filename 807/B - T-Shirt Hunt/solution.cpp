#include <iostream>
 
using namespace std;
 
// Simulates the T-shirt winner selection pseudocode for a given score 's'
bool check(int s, int p) {
    int i = (s / 50) % 475;
    for (int step = 0; step < 25; ++step) {
        i = (i * 96 + 42) % 475;
        if (26 + i == p) {
            return true;
        }
    }
    return false;
}
 
void solve() {
    int p, x, y;
    if (!(cin >> p >> x >> y)) return;
 
    // Check if 0 successful hacks can achieve the goal (only reducing score by 50)
    for (int s = x; s >= y; s -= 50) {
        if (check(s, p)) {
            cout << 0 << "
";
            return;
        }
    }
 
    // Search upwards for the minimal successful hacks
    for (int s = x + 50; ; s += 50) {
        if (check(s, p)) {
            int hacks = (s - x + 50) / 100;
            cout << hacks << "
";
            return;
        }
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}