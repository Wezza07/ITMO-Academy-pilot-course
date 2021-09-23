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

int n,k;
int cuts(int arr[] , double x){
    int res=0;
    for(int i=0 ; i<n; i++) res+=(int)(arr[i]/x);
    return res;
}


int main()
{
    Fast
    cin >>n >> k;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
    double l=0.0 , r=1e7+10;
    for(int i=0 ; i<100 ; i++){
        double m = (l+r)/2;
        int res = cuts(a,m);
        if(res>=k) l = m;
        else r = m;
    }
    cout << setprecision(7) << l;
    return 0;
}
