//approach 1: tLE on tt 7
//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;

class Monster{
  public:
    ll a; // attack value
    ll d; // defence value
    ll dO; //  defence original
    Monster* next;
    Monster* prev;
    
    Monster ( ll attackValue, ll defenceValue)//constructor
    {
      a = attackValue;
      d = defenceValue;
      dO = d;
      next = NULL;
      prev = NULL;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tt;
    cin>>tt;
    while(tt--){
      //take inputs
      ll n;cin>>n;
      vector<ll>a(n),d(n);
      for(ll i=0; i<n; i++)cin>>a[i];
      for(ll i=0; i<n; i++)cin>>d[i];
      
      Monster *head = new Monster(a[0], d[0]);
      Monster *tail = head;
      for(ll i=1; i<n; i++){
        tail->next = new Monster(a[i], d[i]);
        tail->next->prev = tail;
        tail = tail->next;
      }
      
      
      // now the killing starts!!!!!!!!!!!!!!!!!!!!!!!!!!!
      ll round = 1;
      
      while(round<=n){
        Monster* m=head;
        ll die = 0;//died In Current Round
        if(head && head -> next == NULL){
          //only one monster remaining
          cout<<0<<" ";
          round++;
          continue;
        }
        while(m){
          if(m->next)
            m->d = (m->d)-(m->next->a);
          if(m->prev)
            m->d = (m->d)-(m->prev->a);
          
          if(m->d < 0)die++;
          
          m = m->next;
        }
        cout<<die<<" "; //died monsters in current round
        round++;

        //update neighbours for next round
        
        while(head && head->d < 0){
          head = head->next;
          if(head)head->prev = NULL;
        }
        m = head;
        
        while(m){
          if(m->d <0){
            if(m->prev)m->prev->next = m->next;
            if(m->next)m->next->prev = m->prev;
          }  
          else{
            m->d = m->dO;//for next round : defence is orginal one
          }
          m = m->next;
        }
      }
      
      cout<<"\n";
      
    }
    return 0;
}


