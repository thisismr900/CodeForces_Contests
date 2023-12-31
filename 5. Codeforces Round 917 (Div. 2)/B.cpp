//Erase First or Second Letter

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        set<char>st;
        int distinctStrings=0;
        for(int i=0; i<n; i++){
            if(st.find(s[i]) == st.end())//first occurence
            {
                distinctStrings+=n-i;
                st.insert(s[i]);
            }
        }
        cout<<distinctStrings<<endl;

    }
    return 0;
}