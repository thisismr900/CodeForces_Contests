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
        long long r=1;
        int zeroCount=0,negCount=0;
        
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0)zeroCount++;
            else if(a[i]<0)negCount++;
        }
        
        if(zeroCount>0 || negCount %2 ==1)//has Zero OR odd Negatives         cout<<0;
            cout<<0;
        else //r<0 : even negatives 
            cout<<1<<endl<<1<<" "<<0;
        
        cout<<endl;
    }
    return 0;
}