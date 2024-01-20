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
        int n;
        cin>>n;
        // vector<int>s(n),f(n);
        string s,f;
        cin>>s>>f;
        // for(int i=0; i<n; i++)cin>>s[i];
        // for(int i=0; i<n; i++)cin>>f[i];
        
        int removed = 0, added = 0;
        for(int i=0; i<n; i++){
          if(s[i]==f[i])continue;
          else if(s[i]=='0' && f[i]=='1')
            added++;
          else if(s[i] == '1' && f[i]=='0')
            removed++;
        }
        cout<<max(added,removed)<<"\n";
        
        
        
    }
    return 0;
}


