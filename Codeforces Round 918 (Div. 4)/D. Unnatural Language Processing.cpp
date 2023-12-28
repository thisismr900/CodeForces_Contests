#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
bool isC(char c){
    if( c=='b' || c=='c' || c=='d')
        return true;
    return false;
}
bool isV(char c){
    if( c=='a' || c=='e')
        return true;
    return false;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int i=0;
       while(i<n){
           cout<<s[i]<<s[++i];
           //standing at V
           if(i+1==n-1){ //ends with C
               cout<<s[++i]<<endl;
               break;
           }
           if(i==n-1)break; //ends with V
           if(isC(s[i+2])){
               cout<<s[i+1]<<".";
               i+=2;
           }
           else{
               cout<<".";
               i++;
           }
           
       }
       cout<<endl;
        
    }
    return 0;
}