#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sortA(v) sort(v.begin(),v.end());
#define sortD(v) sort(v.rbegin(),v.rend());
#define nl cout << '\n';
 
int Right(int arr[] , int n , int key){
    int l=-1 , r=n;
    while(r>l+1){
        int m =(l+r)/2;
        if(arr[m]>=key) r = m;
        else l=m;
    }
    return r;
}
 
int main()
{
    Fast
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
    for(int i=0 ; i<k ; i++){
        int q;
        cin >> q;
        cout << Right(a,n,q)+1;
        nl
    }
    return 0;
}
