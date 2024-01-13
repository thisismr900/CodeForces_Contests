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
        ll n;//number of constraints
        cin>>n;
        ll a,x;
        vector<ll>t1,t2,t3;
        while(n--){
          cin>>a>>x;
          if(a == 1)
            t1.push_back(x);
          else if(a == 2)
            t2.push_back(x);
          else 
            t3.push_back(x);
        }
        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());
        sort(t3.begin(), t3.end());
        
        ll start = t1.back();
        ll end = t2[0];
        if(start > end){
          cout<<0<<"\n";
          continue;
        }
        ll count = end - start +1;
        for(int i=0; i<t3.size(); i++){
          if(t3[i]>= start && t3[i]<=end)
            count--;
          if(t3[i]>end)break;
        }
        cout<<count<<"\n";
        
    }
    return 0;
}


