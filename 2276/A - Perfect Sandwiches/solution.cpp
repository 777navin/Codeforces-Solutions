#include <iostream>
#include <algorithm>
using namespace std;
void solveTestCase() {
    long long cheeseCount, sausageCount;
    cin >> cheeseCount >> sausageCount;
    // Conditions for making 'k' valid sandwiches:
    // 1. Each sandwich needs at least 1 sausage: k <= sausageCount
    // 2. Each sandwich must have strictly more cheese than sausage (cheese_i - sausage_i >= 1):
    //    Summing over all sandwiches: total_cheese - total_sausage >= k => k <= cheeseCount - sausageCount
    long long maxSandwiches = min(sausageCount, cheeseCount - sausageCount);
    if (maxSandwiches <= 0 || cheeseCount <= 0 || sausageCount <= 0) {
        cout << -1 << "
";
    } else {
        cout << maxSandwiches << "
";
    }
}
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCaseCount;
    cin >> testCaseCount;
    while (testCaseCount--) {
        solveTestCase();
    }
    return 0;
}