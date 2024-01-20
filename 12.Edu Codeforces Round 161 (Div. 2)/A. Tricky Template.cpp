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
        ll n;cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        string ans = "NO";
        for(ll i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                ans = "YES";
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}


