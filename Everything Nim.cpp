#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll n;
    cin>>n;
    set<ll>s;
    fr(i,n){
        ll a;
        cin>>a;
        s.insert(a);
    }
    ll last=0;
    bool ch=true;
    while(!s.empty()){
        ll k=s.size()-1;
        ll p=*s.begin()-last;
        last=*s.begin();
        s.erase(*s.begin());
        if(k%2==0){
            ch=!ch;
        }
        else{
            if(p==1) ch=!ch;
        }
    }
    if(ch){
        cout<<"Bob"<<endl;
        return ;
    }
    cout<<"Alice"<<endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}