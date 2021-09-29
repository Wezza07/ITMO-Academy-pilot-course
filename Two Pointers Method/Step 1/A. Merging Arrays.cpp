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
    int a[n],b[m];
    for(int i=0; i<n ; i++) cin>>a[i];
    for(int i=0; i<m ; i++) cin>>b[i];
    vector<int> c(n+m);
    int i=0 , j=0 , k=0;
    while(i<n || j<m){
        if( j==m || (i<n && a[i]<b[j])) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    for(int x:c) cout << x << " ";
    return 0;
}
