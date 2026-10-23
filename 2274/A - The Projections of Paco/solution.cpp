#include <bits/stdc++.h>
using namespace std;
 
 
long long computeAltSum(const vector<long long>& a) {
    int n = a.size();
    long long result = 0;
    for (int i = 0; i < n; i++) {
        bool positive = (n - 1 - i) % 2 == 0;
        result += positive ? a[i] : -a[i];
    }
    return result;
}
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto& x : a) cin >> x;
 
    long long ans = computeAltSum(a);
 
    if (n % 2 == 0) ans = -ans;
    cout << ans << "
";
}
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}