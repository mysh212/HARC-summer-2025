#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<long long> w;     // 權值
vector<long long> sum_w; // 子樹和

long long dfs(int u) {
    if (u > n) return 0;
    long long s = w[u];
    s += dfs(2 * u);
    s += dfs(2 * u + 1);
    sum_w[u] = s;
    return s;
}

int main() {
    cin >> n >> m;
    w.resize(n + 1);
    sum_w.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> w[i];
    }
    dfs(1);  // 預處理所有節點的子樹和

    for (int i = 0; i < m; ++i) {
        int u;
        cin >> u;
        cout << sum_w[u] << "\n";
    }
    return 0;
}
