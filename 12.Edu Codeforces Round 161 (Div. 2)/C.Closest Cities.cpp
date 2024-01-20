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
    
    ll tt;
    cin>>tt;
    while(tt--){
      ll n;cin>>n;
      vector<ll>a(n);
      for(ll i=0; i<n; i++)cin>>a[i];
      
      vector<ll>p(n,0),s(n,0);
      ll sSum = 1;
      for(ll i=0; i<n-1; i++){
        if(i == 0){
          p[1] = 1;
        }
        else{
          ll l = abs(a[i-1]-a[i]);
          ll r = abs(a[i]-a[i+1]);
          if(r<l)
            p[i+1] = p[i]+1;
          else
            p[i+1] = p[i]+r;
        }
      }
      
      for(ll i=n-1; i>0; i--){
        if(i == n-1){
          s[n-2] = 1;
        }
        else{
          ll l = abs(a[i-1]-a[i]);
          ll r = abs(a[i]-a[i+1]);
          if(l<r)
            s[i-1] = s[i]+1;
          else
            s[i-1] = s[i]+l;
        }
      }
      // cout<<endl;
      // for(ll i=0; i<n; i++)cout<<p[i]<<" ";
      // cout<<endl;
      // for(ll i=0; i<n; i++)cout<<s[i]<<" ";
      ll m;cin>>m;
      while(m--){
        ll start,end;
        cin>>start>>end;
        start--;end--;
        if(start<end)
          cout<<abs(p[end]-p[start]);
        else
          cout<<abs(s[start]-s[end]);
        
        cout<<"\n";
        
      }

        
    }
    return 0;
}


