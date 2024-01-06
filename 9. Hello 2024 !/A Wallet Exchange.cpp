//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************
LOGIC:

*****************************************/
bool play(ll a, ll b){
  if(abs(a-b)%2 ==1)//odd
    return true;
  return false;
  
  //return true if Alice wins
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll a,b;
        cin>>a>>b;
        if(play(a,b))
          cout<<"Alice\n";
        else cout<<"Bob\n";
        
    }
    return 0;
}


