// Author : ysh
// 2025/07/17 Thu 09:50:52
#include<bits/stdc++.h>
using namespace std;
const int R = int(1e9) + 7;
int fp(int a, int b, int r) {
    if(b == 0) return 1;

    int tmp = fp(a, b >> 1, r);
    if(b & 1) return ((1LL * tmp * tmp) % r) * a % r;
    return 1LL * tmp * tmp % r;
}
int inv(int x) {
    return fp(x, R - 1 - 1, R);
}
vector<int>mark({1});
int fl(int x) {
    if(x + 1 <= mark.size()) return mark.at(x);
    int ans = (1LL * fl(x - 1) * x) % R;
    mark.push_back(ans);
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    string useless;
    vector<int>f(n);
    long long sig = 0;
    for(int &i : f) cin>>useless>>i, sig += i;

    long long ans = fl(sig);
    // cerr<<sig<<" "<<ans<<" ";
    for(int &i : f) ans = ans * inv(fl(i)) % R;

    cout<<ans;
    return 0;
}