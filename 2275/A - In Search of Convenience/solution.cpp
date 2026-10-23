 
#include <iostream>
 
void solve() {
    long long x, y, distance;
    std::cin >> x >> y >> distance;
 
    // Move vertically by the required distance.
    std::cout << x << ' ' << y + distance << '
';
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int testCases;
    std::cin >> testCases;
 
    while (testCases-- > 0) {
        solve();
    }
}