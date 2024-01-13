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
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>a(n),prefSum(n);
        ll s = 0;
        for(ll i=0; i<n; i++)
          cin>>a[i];
        sort(a.begin(), a.end());
        
        for(ll i=0; i<n; i++){
          s += a[i];
          prefSum[i] = s;
        }
        
        ll ans = -1e18;
        for(ll i=0; i<=k; i++){
          // cout<<"i:"<<i<<endl;
          ll posSum,negSum;
          if((n-1)-x-i >=0)
            posSum = prefSum[(n-1)-x-i];
          else posSum = 0;
          // cout<<"posSum: "<<posSum<<endl;
          if(n-1-i<0)
            negSum = 0;
          else
            negSum = prefSum[n-1-i] - posSum;
          // cout<<"negSum: "<<negSum<<endl;
          ll sum = posSum - negSum;
          // cout<<"sum: "<<sum<<endl;
          if(sum>ans)
            ans = sum;
          // cout<<"ans: "<<ans<<endl;
          
          // a.pop_back();
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}


