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
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long ans;
        long long k=2;

        while(k<=1e18){
            set<long long>st;
            for(int i=0; i<n; i++)
                st.insert(a[i]%k);
            if(st.size()==2)//2 unique elements
            {
                ans=k;
                break;
            }
            k*=2;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}