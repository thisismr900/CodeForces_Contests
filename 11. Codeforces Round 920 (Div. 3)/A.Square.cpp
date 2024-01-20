//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll x1,y1,x2,y2,x3,y3,x4,y4;
        ll side;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        
        if(x1 == x2)
          side = abs(x1-x3);
        else 
          side = abs(x1-x2);
        
        cout<<side*side<<"\n";
        
    }
    return 0;
}


