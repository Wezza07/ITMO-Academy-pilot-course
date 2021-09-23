#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sortA(v) sort(v.begin(),v.end());
#define sortD(v) sort(v.rbegin(),v.rend());
#define nl cout << '\n';
 
bool BinarySearch(int arr[] , int n , int k){
    int l=0 , r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(arr[m]==k) return true;
        else if(arr[m]<k)  l = m+1;
        else if(arr[m]>k)  r = m-1;
    }
    return false;
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
        if(BinarySearch(a,n,q)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
