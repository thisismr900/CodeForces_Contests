#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
// bool isSquare(ll n){
//     ll low=1,high=n,mid;
//     bool ans=false;
//     while(low<=high){
//         mid=low+(high-low)/2;
//         ll val = mid*mid; 
//         if( val>n )
//             high=mid-1;
//         else if( val<n )
//             low=mid+1;
//         else//val==n
//         {
//             ans=true;
//             break;
//         }
//     }
//     return ans;
// }
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        
        double v = sqrt(sum);
        if( floor(v)==v )
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}