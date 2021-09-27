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

double c;

bool good(double m){
    double res = m*m + sqrt(m);
    return res>=c;
}


int main()
{
    Fast
    cin >> c;
    double l=0 , r = 1e10+10;
    for(int i=0 ; i<100 ; i++){
        double m = (l+r)/2;
        if(good(m)) r = m;
        else l = m;
    }
    cout << setprecision(20) << r;
    return 0;
}
