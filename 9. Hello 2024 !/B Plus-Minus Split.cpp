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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int sum = 0;
      for(auto c:s){
        if(c=='+')
          sum += 1;
        else 
          sum -= 1;
      }
      cout<<abs(sum)<<"\n";
        
    }
    return 0;
}


