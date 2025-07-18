#include <iostream>
#include <vector>
#include <numeric>

std::vector<std::vector<int>> adj;
std::vector<int> colors;
long long operations_count = 0;

void dfs(int u, int parent, int ancestor_flip_state) {
    // Calculate the effective color of node u based on its initial color
    // and the cumulative flips from its ancestors.
    int current_effective_color = (colors[u - 1] + ancestor_flip_state) % 2;

    int next_flip_state;
    if (current_effective_color == 1) {
        // If the effective color is 1, we must perform an operation on node u
        // to make its color 0.
        operations_count++;
        // This operation flips the colors of u and its entire subtree.
        // So, the flip state passed to its children will be the inverse of
        // the ancestor_flip_state.
        next_flip_state = (ancestor_flip_state + 1) % 2;
    } else {
        // If the effective color is 0, no operation is needed on node u.
        // The flip state passed to its children remains the same as its own.
        next_flip_state = ancestor_flip_state;
    }

    // Recursively call DFS for all children of u.
    for (int v : adj[u]) {
        if (v == parent) {
            continue;
        }
        dfs(v, u, next_flip_state);
    }
}

int main() {
    // Optimize C++ standard streams for faster input/output.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    colors.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> colors[i];
    }

    adj.resize(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Start DFS from the root (node 1).
    // The initial ancestor_flip_state is 0, as there are no ancestors to node 1.
    dfs(1, 0, 0);

    std::cout << operations_count << std::endl;

    return 0;
}