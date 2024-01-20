//TLE on test 5:
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
      ll n,q;cin>>n>>q;
      vector<ll>a(n);
      for(ll i=0; i<n; i++)cin>>a[i];
      
      while(q--){
        ll s,d,k;
        cin>>s>>d>>k;
        s--;
        ll sum = 0;
        for(ll i=1; i<=k; i++){
          sum+= i*(a[s+d*(i-1)]);
        }
        cout<<sum<<" ";
      }
      cout<<"\n";
    }
    return 0;
}


