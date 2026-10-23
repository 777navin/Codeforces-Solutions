#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int size;
    cin >> size;
 
    vector<int> perm(size + 1);
    for (int pos = 1; pos <= size; ++pos) {
        cin >> perm[pos];
    }
 
    for (int pos = 1; pos <= size; ++pos) {
        if (perm[perm[pos]] != pos) {
            cout << "NO
";
            return;
        }
    }
 
    vector<pair<int, int>> swappedPairs;
    for (int pos = 1; pos <= size; ++pos) {
        if (perm[pos] > pos) {
            swappedPairs.emplace_back(pos, perm[pos]);
        }
    }
 
    if (swappedPairs.size() <= 1) {
        cout << "YES
";
        return;
    }
 
    for (size_t idx = 0; idx + 1 < swappedPairs.size(); ++idx) {
        if (swappedPairs[idx].second <= swappedPairs[idx + 1].second) {
            cout << "NO
";
            return;
        }
    }
 
    if (swappedPairs.back().first >= swappedPairs.back().second) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
 
 
 
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
 
    return 0;
}