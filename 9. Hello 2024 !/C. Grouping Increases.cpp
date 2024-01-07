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
      vector<int>a(n);
      for(int i=0; i<n; i++)cin>>a[i];
        
      int penalty = 0;
		  int lo = n + 1, hi = n + 1;
 
		  for (int i = 0; i < n; i++) {
			  if (lo > hi) swap(lo, hi);
			  if (a[i] <= lo) lo = a[i];
			  else if (a[i] > hi) penalty++, lo = a[i];
			  else hi = a[i];
		}
    cout<<penalty<<"\n";
    }
    return 0;
}

 