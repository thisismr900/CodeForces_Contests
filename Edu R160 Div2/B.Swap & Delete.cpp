#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        string s,t;
        cin>>s;
        
        int cnt0=0,cnt1=0;
        for(auto c:s){
            if(c=='1')cnt1++;
            else cnt0++;
        }
        if(cnt0==cnt1){
            cout<<0<<endl;
            continue;
        }

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')
            {
                if(cnt0>0)
                    cnt0--;
                else break;
            }
            else
            {
                if(cnt1>0)
                    cnt1--;
                else break;
            }
        }
        cout<<cnt0+cnt1<<endl;
    }
    return 0;
}