// Author : ysh 
// Pre-compiled : 2025/07/18 Fri 01:42:48 
 
#include<bits/stdc++.h> 
# 1 "ccb.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ccb.cpp"


using namespace std;
# 1 "C:\\Users\\ysh00\\Coding\\library/slow" 1
# 38 "C:\\Users\\ysh00\\Coding\\library/slow"
template<class T>
std::istream& operator>>(std::istream& fin,std::vector<T>&f) {
    for(auto &&i : f) fin>>i;
    return fin;
}
template<class T,class R>
std::istream& operator>>(std::istream& fin,std::pair<T,R>&x) {
    fin>>x.first>>x.second;
    return fin;
}

template<class T>
std::ostream& operator<<(std::ostream& fout,std::vector<T>&f) {
    for(auto &i : f) fout<<i<<" ";
    return fout;
}
template<class T,class R>
std::ostream& operator<<(std::ostream& fout,std::pair<T,R>&x) {
    fout<<x.first<<" "<<x.second;
    return fout;
}
# 5 "ccb.cpp" 2
# 1 "C:\\Users\\ysh00\\Coding\\library/tree" 1
template<typename T>
struct tree{
    std::vector<T>f;
    int n;

    tree(int n) {
        this->n = n;
        f.resize(n);
    }

    tree(std::vector<T>&v):
    tree(v.size()) {
        int t = 0;
        for(T i : v) add(t++,i);
    }

    void add(int a,T b) {
        for(;a < n;a = a | (a + 1)) {
            f[a] += b;
        }
    }

    T sum(int a) {
        T ans = 0;
        for(;a >= 0;a = (a & (a + 1)) - 1) {
            ans = ans + f[a];
        }
        return ans;
    }

    T sum(int a,int b) {
        if(a > b) std::swap(a,b);
        assert(!(b >= n || a < 0));
        return sum((std::min(n - 1,b))) - sum(a - 1);
    }
};
# 6 "ccb.cpp" 2

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a;cin>>a;
    vector<vector<pair<long long, long long>>>f(a);
    for(long long _ = 0;_<a - 1;_++) {
        long long a,b,c;cin>>a>>b>>c;
        a--;b--;
        f.at(a).push_back({b, c});
        f.at(b).push_back({a, c});
    }

    vector<long long>mark, _re(a);
    vector<pair<long long,long long>>mk(a);
    function<void(long long,long long)> check = [&] (long long last, long long x) {
        _re.at(x) = last;

        for(auto &i : f.at(x)) {
            if(i.first == last) continue;

            mark.push_back(i.second);
            mk.at(i.first).first = mark.size() - 1;

            check(x, i.first);

            mark.push_back(-i.second);
            mk.at(i.first).second = mark.size() - 1;
        }
        return;
    };

    check(-1, 0);
    mk.at(0).second = mark.size() - 1;

    tree<long long>t(mark);
    long long k;cin>>k;
    for(long long _ = 0;_<k;_++) {
        long long op;cin>>op;
        if(op == 0) {
            long long tmp;cin>>tmp;
            tmp--;
            cout<<(t.sum(mk.at(tmp).first))<<"\n";
        }
        if(op == 1) {
            long long a,b,c;cin>>a>>b>>c;
            a--;b--;
            if(_re.at(a) == b) swap(a, b);
            long long det = c - mark.at(mk.at(a).first);
            '*';
            mark.at(mk.at(a).first) += det;
            mark.at(mk.at(a).second) -= det;
            '*';
            t.add(mk.at(a).first, det);
            t.add(mk.at(a).second, -det);
        }
    }

    return 0;
}
/*  
// Author : ysh
// 2025/07/17 Thu 18:44:39
#include<bits/stdc++.h>
using namespace std;
#include<slow>
#include<tree>
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a;cin>>a;
    vc<vc<pair<int, int>>>f(a);
    re(a - 1) {
        int a,b,c;cin>>a>>b>>c;
        a--;b--;
        f.at(a).push_back({b, c});
        f.at(b).push_back({a, c});
    }

    vc<int>mark, _re(a);
    vc<pair<int,int>>mk(a);
    function<void(int,int)> check = [&] (int last, int x) {
        _re.at(x) = last;
        // mark.push_back()
        repo(&i, f.at(x)) {
            if(i.first == last) continue;
            
            mark.push_back(i.second);
            mk.at(i.first).first = mark.size() - 1;
            
            check(x, i.first);
            
            mark.push_back(-i.second);
            mk.at(i.first).second = mark.size() - 1;
        }
        return;
    };
    
    check(-1, 0);
    mk.at(0).second = mark.size() - 1;

    tree<int>t(mark);
    int k;cin>>k;
    re(k) {
        int op;cin>>op;
        if(op == 0) {
            int tmp;cin>>tmp;
            tmp--;
            outl(t.sum(mk.at(tmp).first));
        }
        if(op == 1) {
            int a,b,c;cin>>a>>b>>c;
            a--;b--;
            if(_re.at(a) == b) swap(a, b);
            int det = c - mark.at(mk.at(a).first);
            debug(det);
            mark.at(mk.at(a).first) += det;
            mark.at(mk.at(a).second) -= det;
            debug(mark, mk, a, b);
            t.add(mk.at(a).first, det);
            t.add(mk.at(a).second, -det);
        }
    }

    return 0;
}  
*/  
