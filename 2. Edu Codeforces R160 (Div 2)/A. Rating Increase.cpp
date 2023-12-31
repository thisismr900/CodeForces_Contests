// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        string ab;
        ab = to_string(n);
        
        if(ab[0]=='0'){
            cout<<-1<<endl;
            continue;
        }
        
        int aEnd = -1;
        for(int i=1; i<ab.size(); i++){
            if(ab[i]!='0'){
                aEnd = i-1;
                break;
            }
        }
        if(aEnd == -1){ 
            cout<<-1<<endl;
            continue;
        }
        
        int a = stoi( ab.substr(0,aEnd+1) );
        int b = stoi( ab.substr(aEnd+1, ab.size()-(aEnd+1)) );
        
        if(b<=a)
            cout<<-1<<endl;
        else
            cout<<a<<" "<<b<<endl;
 
    }
 
    return 0;
}