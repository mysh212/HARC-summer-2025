#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> color(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
    }
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    auto dfs = [&](auto self, int u, int par, int inv) -> void {
        if (color[u] ^ inv) {
            ans++;
            inv ^= 1;
        }
        for (int v : adj[u]) {
            if (v == par) {
                continue;;
            }
            self(self, v, u, inv);
        }
    };
    dfs(dfs, 1, 0, 0);
    cout << ans << '\n';
}