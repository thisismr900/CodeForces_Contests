#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<ll>a(n);
        set<ll>prefSum;
        prefSum.insert(0);
        ll s=0;
        bool flag = false;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i%2==0)
                a[i]*= -1;
            s+=a[i];
            if(prefSum.find(s)!=prefSum.end()){
                flag = true;
            }
            prefSum.insert(s);
        }
        
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}