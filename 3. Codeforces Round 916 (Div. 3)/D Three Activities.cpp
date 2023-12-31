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
        int n;
        cin>>n;
        vector<int>a(n), b(n), c(n);
        vector< pair<int,int> >va,vb,vc;
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            va.pb({a[i],i});
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            vb.pb({b[i],i});
        }
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            vc.pb({c[i],i});
        }

        sort(begin(va), end(va), greater<>());
        sort(begin(vb), end(vb), greater<>());
        sort(begin(vc), end(vc), greater<>());
        
        int res=0;
        for(int i=0; i<3; i++){//i runs on va
            for(int j=0; j<3; j++){//j runs on vb
                for(int k=0; k<3; k++){//k  runs on vc
                    if(va[i].ss != vb[j].ss && va[i].ss !=vc[k].ss && vb[j].ss != vc[k].ss )
                        res = max( res, va[i].ff + vb[j].ff + vc[k].ff);
                }
            }
        }
        cout<<res<<endl;
        
    }
    return 0;
}