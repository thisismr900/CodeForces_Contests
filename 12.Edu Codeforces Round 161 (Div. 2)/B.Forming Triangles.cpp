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
      ll n;cin>>n;
      vector<ll>a(n);
      map<ll,ll>mp;
      for(ll i=0; i<n; i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }
      ll cnt = 0, ans = 0;
      for(auto it:mp){
        if(it.ss >=3)
          ans+= ( (it.ss)*(it.ss-1)*(it.ss-2) )/6;
        if(it.ss >=2)
          ans+=( ( (it.ss)*(it.ss-1) )/2 )*cnt;
        
        cnt+=it.ss;
      }
      cout<<ans<<"\n";
        
    }
    return 0;
}


