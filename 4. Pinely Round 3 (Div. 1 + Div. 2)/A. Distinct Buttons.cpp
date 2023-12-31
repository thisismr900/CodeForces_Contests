#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int count_pos_x = 0;
        int count_neg_x = 0;
        int count_pos_y = 0;
        int count_neg_y = 0;

        while(n--){
            int x,y;
            cin>>x>>y;
            if( x>0 )
                count_pos_x++;
            if( x<0 )
                count_neg_x++;

            if( y>0 )
                count_pos_y++;
            if( y<0 )
                count_neg_y++;
        }

        if(count_neg_x==0 || count_neg_y==0 || count_pos_x==0 || count_pos_y==0 )
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        }

    return 0;
}