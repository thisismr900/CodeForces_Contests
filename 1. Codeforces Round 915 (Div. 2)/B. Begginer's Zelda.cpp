#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    ll tt;
    cin>>tt;
    while(tt--){
        int nodes;
        cin>>nodes;
        int countLeaves=0;
        map<int,int>mp;
        for(int i=0; i<(nodes-1); i++){
            int u,v;
            cin>>u>>v;
            mp[u]++;
            mp[v]++;
        }
        
        for(auto i:mp){
            if(i.second == 1)
                countLeaves++;
        }
        
        int ans = ceil(countLeaves/2.0);
        // int ans = countLeaves/2 + countLeaves%2;
        cout<<ans<<endl;
    }
    return 0;
}