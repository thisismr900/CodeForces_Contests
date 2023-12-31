#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    ll tt;
    cin>>tt;
    while(tt--){
        ll a,b;
        cin>>a>>b;
        ll ans;
        if(b%a ==0)
            ans = b*(b/a);
        else 
            ans = (a*b)/gcd(a,b); 
        
        cout<<ans<<endl;
    }
    return 0;
}