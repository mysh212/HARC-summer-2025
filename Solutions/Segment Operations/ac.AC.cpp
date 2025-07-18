#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    set<int> st;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        st.insert(i);
    }

    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int l, r;
            cin >> l >> r;
            auto it = st.lower_bound(l);
            while (it != st.end() && *it <= r) {
                arr[*it] /= 2;
                if (arr[*it] == 0) {
                    it = st.erase(it);
                } else {
                    it++;
                }
            }
        } else if (t == 2) {
            int i;
            cin >> i;
            cout << arr[i] << '\n';
        }
    }
}