 
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
 
    vector<int> a(n);
 
 
 
    map<int, int> freq;
    int mv = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
        mv = max(mv, a[i]);
    }
 
    int mf = 0;
    for (auto const& [val, count] : freq) {
        mf = max(mf, count);
    }
 
    vector<vector<int>> l(mf);
    for (auto const& [val, count] : freq) {
        for (int i = 0; i < count; ++i) {
            l[i].push_back(val);
        }
    }
 
    vector<int> r;
    for (int i = 0; i < mf; ++i) {
 
 
        sort(l[i].rbegin(), l[i].rend());
        for (int val : l[i]) {
 
            r.push_back(val);
        }
    }
 
    for (int i = 0; i < n; ++i) {
 
 
 
        cout << r[i] << (i + 1 == n ? "" : " ");
    }
 
    cout << "
";
}
 
int main() {
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