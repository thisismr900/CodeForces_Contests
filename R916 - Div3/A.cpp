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
        string log;
        cin>>log;
        map<char,int>mp;

        for(int i=0; i<log.size(); i++){
            mp[log[i]]++;
        }

        int solved = 0;
        for(auto i:mp){
            int freq = i.second;
            if(freq >= (i.first-'A'+1))
                solved++;
        }
        cout<<solved<<endl;
    }
    return 0;
}