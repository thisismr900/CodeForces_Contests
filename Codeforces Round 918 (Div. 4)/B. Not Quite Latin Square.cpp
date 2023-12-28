#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        vector<vector<char>>a(3,vector<char>(3));
        int x,y;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>a[i][j];
                if(a[i][j]=='?'){
                    x=i;
                    y=j;
                }
            }
        }
        bool A=false,B=false,C=false;
        for(int c=0; c<3; c++){
            if(a[x][c]=='A')
                A=true;
            else if(a[x][c]=='B')
                B=true;
            else if(a[x][c]=='C')
                C=true;
        }
        if(!A)
            cout<<"A";
        else if(!B)
            cout<<"B";
        else
            cout<<"C";
        
        cout<<endl;
    }
    return 0;
}