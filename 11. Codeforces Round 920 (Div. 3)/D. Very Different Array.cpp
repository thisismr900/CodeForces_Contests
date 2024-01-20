//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(m),c(n);
        for(ll i=0; i<n; i++)cin>>a[i];
        for(ll i=0; i<m; i++)cin>>b[i];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll d=0;
        
        for(ll i=0; i< n/2; i++){
          c[i] = b[m-1-i];
          c[n-1-i] = b[i];
          d+=abs(a[i]-c[i]);
          d+= abs(a[n-1-i]- c[n-1-i]);
        }
        if(n%2 == 1){
          ll i = n/2;
          d+= max(abs(a[i]-b[m-1-i]), abs(a[i]-b[i]) );
        }
        cout<<d<<"\n";
        
        
    }
    return 0;
}


