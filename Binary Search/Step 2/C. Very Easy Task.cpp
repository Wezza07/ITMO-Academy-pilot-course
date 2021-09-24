#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sortA(v) sort(v.begin(),v.end());
#define sortD(v) sort(v.rbegin(),v.rend());
#define nl cout << '\n';

const double eps=1e-6;

int n,x,y;

bool good(ll m){
    int minn = min(x,y);
    if(m<minn) return false;
    m-=minn;
    ll res=1;
    res+=m/(ll)x;
    res+=m/(ll)y;
    return res>=n;
}


int main()
{
    Fast
    cin >> n >> x >> y;
    if(n==1){
        cout << min(x,y);
        return 0;
    }
    ll l=0 , r=1e10;
    while(r>l+1){
        ll m = (r+l)/2;
        if(good(m)) r=m;
        else l=m;
    }
    cout << r;
    return 0;
}
