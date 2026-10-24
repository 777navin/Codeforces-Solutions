#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
const int N = 5e5 + 5, L = 20;
 
vector<int> g[N];
int dep[N], up[N][L], rt[N];
 
int lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
 
    for (int j = L - 1; j >= 0; j--)
        if (dep[u] - (1 << j) >= dep[v])
            u = up[u][j];
 
    if (u == v) return u;
 
    for (int j = L - 1; j >= 0; j--)
        if (up[u][j] != up[v][j])
            u = up[u][j], v = up[v][j];
 
    return up[u][0];
}
 
int dis(int u, int v) {
    return dep[u] + dep[v] - 2 * dep[lca(u, v)];
}
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) g[i].clear();
 
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    vector<int> st = {1};
    up[1][0] = 1;
 
    while (!st.empty()) {
        int u = st.back();
        st.pop_back();
 
        for (int v : g[u]) {
            if (v == up[u][0]) continue;
 
            dep[v] = dep[u] + 1;
            up[v][0] = u;
            rt[v] = (u == 1 ? v : rt[u]);
 
            for (int j = 1; j < L; j++)
                up[v][j] = up[up[v][j - 1]][j - 1];
 
            st.push_back(v);
        }
    }
 
    int ans = dep[n], x = rt[n];
 
    while (m--) {
        int v;
        cin >> v;
 
        if (rt[v] == x)
            ans = max(ans, 1 + dis(v, n));
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) solve();
}