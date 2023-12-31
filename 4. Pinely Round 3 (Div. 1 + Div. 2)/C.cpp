//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>l(n),r(n),c(n);
        for(int i=0; i<n; i++)cin>>l[i];
        for(int i=0; i<n; i++)cin>>r[i];
        for(int i=0; i<n; i++)cin>>c[i];

        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        sort(c.begin(), c.end(), greater <>());

        int ans=0;

        for(int i=0; i<n; i++){
            ans+= c[i]*(r[i]-l[i]);
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}