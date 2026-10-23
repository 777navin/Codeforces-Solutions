 
#include <iostream>
#include <map>
#include <vector>
 
void solve() {
    int n;
    std::cin >> n;
 
    std::vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
    }
 
    const int m = n - 4;
    std::vector<long long> value(m + 1);
    std::map<long long, long long> frequency;
 
    for (int i = 1; i <= m; ++i) {
        value[i] = a[i] + a[i + 2] - a[i + 4];
        ++frequency[value[i]];
    }
 
    long long equalPairs = 0;
    for (const auto& [value, count] : frequency) {
        equalPairs += count * (count - 1) / 2;
    }
 
    long long invalidPairs = 0;
 
    for (int i = 1; i <= m - 2; ++i) {
        if (value[i] == value[i + 2]) {
            ++invalidPairs;
        }
    }
 
    for (int i = 1; i <= m - 4; ++i) {
        if (value[i] == value[i + 4]) {
            ++invalidPairs;
        }
    }
 
    std::cout << equalPairs - invalidPairs << '
';
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t;
    std::cin >> t;
    while (t-- > 0) {
        solve();
    }
}