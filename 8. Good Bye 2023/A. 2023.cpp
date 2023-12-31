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
        
        ll pro=1;
        vector<ll>b(n);
        bool ok=true;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            pro*= b[i];
            if(b[i]!=1 && b[i]!=7 && b[i]!=17 && b[i]!=119 && b[i]!=289 && b[i]!=2023)
                ok=false;
        }
        if(!ok || pro>2023 || 2023%pro !=0){
            cout<<"no\n";
            continue;
        }
        cout<<"yes\n";
        
        int rem = 2023/pro;
        cout<<rem;
        k--;
        while(k--){
            cout<<" "<<1<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}