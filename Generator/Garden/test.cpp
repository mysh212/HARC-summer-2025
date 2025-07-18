// Author : ysh
// 2025/07/17 Thu 09:38:42
// #include<bits/stdc++.h>
#include"testlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(int ac, char* as[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    registerGen(ac, as, 1);

    long long n = atoll(as[1]);
    long long sig = atoll(as[2]);
    bool k = (as[3] == "1");

    if(k) {
        n = rnd.next(0LL, n);
        sig = rnd.next(n, sig);
    }
    
    cout<<n<<"\n";
    vector<int>f(n);
    iota(f.begin(), f.end(), 0);
    shuffle(f.begin(), f.end());

    sig -= n;

    for(int i = 0;i<n;i++) {
        int tmp = rnd.next(0LL, sig >> 1);
        sig -= tmp;
        cout<<f.at(i)<<" "<<tmp + 1<<"\n";
    }

    return 0;
}