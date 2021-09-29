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
 
int main()
{
    Fast
    int n ,m;
    cin >> n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n ; i++) cin>> a[i];
    for(int i=0 ; i<m ; i++) cin>> b[i];
    int i=0 , j=0;
    vector<int> res(m);
    while(i<n || j<m){
        if(j==m || (i<n && a[i]<b[j])) i++;
        else res[j++] = i;
    }
    for(int x:res) cout << x<< " ";
    return 0;
}
