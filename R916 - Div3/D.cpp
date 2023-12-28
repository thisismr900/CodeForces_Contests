
//memoization


//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int f(int i, int j, vector<int> &d, int n, vector<vector<int>>&dp, vector<vector<int>>ad){
    //base case
    if(i==3)
        return 0;
    
    if(dp[i][j]!= -1)return dp[i][j];

    d.push_back(j);
    int maxi=0;
    for(int k=0;k<n;k++){
        if(find(d.begin(), d.end(), k) == d.end()){
            maxi=max(maxi,ad[i][j]+ f(i+1,k,d,n,dp,ad));
        }
    }
    d.pop_back();
    return dp[i][j] = maxi;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>ad(3,vector<int>(n));
        for(int j=0; j<n; j++)
            cin>>ad[0][j];
        for(int j=0; j<n; j++)
            cin>>ad[1][j];
        for(int j=0; j<n; j++)
            cin>>ad[2][j];

        vector<int>d;
        vector<vector<int>>dp(3,vector<int>(n,-1));
        int maxi = 0;
        for(int j=0; j<n; j++){
            maxi = max(maxi, f(0,j,d,n,dp,ad));
        }
        cout<<maxi<<endl;

    }
    return 0;
}

