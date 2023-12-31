#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll tt;
    cin>>tt;
    while(tt--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b)
            cout<<c;
        else if(a==c)
            cout<<b;
        else cout<<a;
        
        cout<<endl;
    }
    return 0;
}