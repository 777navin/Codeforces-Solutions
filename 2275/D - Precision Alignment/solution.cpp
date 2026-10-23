 
#include <bits/stdc++.h>
using namespace std;
 
struct Lab {
    long long sum;
    long long balanceCost;
    bool fixed;
};
 
void solve() {
    int n;
    long long budget;
    cin >> n >> budget;
 
    vector<Lab> labs(n);
    long long minSum = LLONG_MAX;
 
    for (int i = 0; i < n; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = a + b + c;
        minSum = min(minSum, sum);
 
        if (a == b && b == c) {
            labs[i] = {sum, 0, true};
        } else if (a > b || b > c || a > c) {
            labs[i] = {sum, 0, false};
        } else {
            long long raiseFirst = b - a + 1;
            long long raiseSecond = c - b + 1;
            long long balanceCost = min(raiseFirst, raiseSecond);
            labs[i] = {sum, balanceCost, false};
        }
    }
 
    long long low = minSum;
    long long high = minSum + budget;
    long long answer = minSum;
 
    auto check = [&](long long target) -> bool {
        long long operations = 0;
        for (int i = 0; i < n; ++i) {
            if (target > labs[i].sum) {
                if (labs[i].fixed) {
                    return false;
                }
                operations += (target - labs[i].sum) + 2 * labs[i].balanceCost;
                if (operations > budget) {
                    return false;
                }
            }
        }
        return operations <= budget;
    };
 
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid)) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
 
    cout << answer << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}