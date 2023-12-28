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
        vector<int>e(n);
        e[0]=-1;
        for(int i=1; i<n; i++)
            cin>>e[i];
        
        map<int,int>mp;
        for(int i=1; i<e.size(); i++){
            mp[e[i]]++;
        }

        int teams =0;
        for(auto i:mp){
            teams+=(i.second)*(i.second -1)/2;
        }
        cout<<teams<<endl;
    }
    return 0;
}