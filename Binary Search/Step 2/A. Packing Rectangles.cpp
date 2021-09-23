#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sortA(v) sort(v.begin(),v.end());
#define sortD(v) sort(v.rbegin(),v.rend());
#define nl cout << '\n';

ll w , h , n;

bool isGood(ll x){
    return (x/w)*(x/h)>=n;
}


int main()
{
    Fast
    cin >> w >> h >> n;
    ll l=0;
    ll r = 1;
    while(!isGood(r)) r*=2;
    while(r>l+1){
        ll m = (l+r)/2;
        if(isGood(m)) r = m;
        else l = m;
    }
    cout << r;
    return 0;
}
