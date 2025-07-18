// Author : ysh
// 2025/07/18 Fri 01:00:18
#include<bits/stdc++.h>
#include"testlib.h"
using namespace std;
vector<int>color;
inline int ff(int x) {
    if(color.at(x) == x) return x;
    return color.at(x) = ff(color.at(x));
}
inline void mg(int a, int b) {
    color.at(ff(a)) = ff(b);
    return;
}
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac, as, 1);

    int n = atoi(as[1]);
    int k = atoi(as[2]);
    bool o = (atoi(as[3]) == 1);
    bool ez = (atoi(as[4]) == 1);

    if(o) {
        n = rnd.next(1, n);
        k = rnd.next(1, k);
    }

    vector<int>pre(n);
    cout<<n<<"\n";
    if(ez) {
        vector<int>v(n);
        iota(v.begin(), v.end(), 0);
        shuffle(v.begin() + 1, v.end());
        for(int i = 1;i<n;i++) pre.at(v.at(i)) = v.at(i - 1);
    } else {
        color.resize(n);
        iota(color.begin(), color.end(), 0);

        for(int i = 1;i<n;i++) {
            int tmp = rnd.next(0, n - 1);
            while(ff(i) == ff(tmp)) tmp = rnd.next(0, n - 1);
            mg(i, tmp);
            pre.at(i) = tmp;
        }
    }

    for(int i = 1;i<n;i++) {
        int tmp = pre.at(i);
        if(rnd.next(0, 1) == 1) cout<<i + 1<<" "<<tmp + 1<<" "<<rnd.next(0, int(1e9))<<"\n";
        else cout<<tmp + 1<<" "<<i + 1<<" "<<rnd.next(0, int(1e9))<<"\n";
    }

    cout<<k<<"\n";
    for(int i = 0;i<k;i++) {
        int now = rnd.next(0, 1);
        if(now == 0) {
            cout<<now<<" "<<rnd.next(1, n)<<"\n";
        }
        if(now == 1) {
            int tmp = rnd.next(1, n - 1);
            if(rnd.next(0, 1) == 1) cout<<now<<" "<<tmp + 1<<" "<<pre.at(tmp) + 1<<" "<<rnd.next(0, int(1e9))<<"\n";
            else cout<<now<<" "<<pre.at(tmp) + 1<<" "<<tmp + 1<<" "<<rnd.next(0, int(1e9))<<"\n";
        }
    }

    return 0;
}