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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<ll>m(n);
        for(ll i=0; i<n; i++)cin>>m[i];
        bool ok = true;
        ll currTime = 0;
        ll remCharge = f;
        for(ll i=0; i<n; i++){
          ll t = m[i];
          ll chargeWillConsume = min(b, a*(t-currTime));
          remCharge -=chargeWillConsume;
          if(remCharge<=0){
            ok = false;
            break;
          }
          currTime = t;
        }
        if(ok)
          cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}


