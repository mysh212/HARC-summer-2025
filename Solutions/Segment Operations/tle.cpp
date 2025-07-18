#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int l, r;
            cin >> l >> r;
            for (int i = l; i <= r; i++) {
                arr[i] /= 2;
            }
        } else if (t == 2) {
            int i;
            cin >> i;
            cout << arr[i] << '\n';
        }
    }
}