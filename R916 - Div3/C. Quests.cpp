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
        int n,k;
        cin>>n>>k;
        vector<int>a(n),prefSuma(n),b(n),leftMaxb(n);
        int s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s += a[i];
            prefSuma[i] = s;
        }
        int maxi=-1;
        for(int i=0; i<n; i++){
            cin>>b[i];
            maxi = max(maxi,b[i]);
            leftMaxb[i] = maxi;
        }
        
        int maxReward=0;
        for(int i=0; i<min(n,k); i++){
            int reward = prefSuma[i];
            int remQuest = k-i-1;
            if(remQuest>=0)
                reward+= (remQuest)*(leftMaxb[i]);
            else break;
            
            maxReward = max(maxReward, reward);
        }
        
        cout<<maxReward<<endl;
    }
    return 0;
}