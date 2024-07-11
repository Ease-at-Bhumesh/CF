#include<bits/stdc++.h>
#define ll long long unsigned
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
    ll n,m;
    cin>>n>>m;
    set<ll>s;
    ll left=0;
    ll right=0;
    fr(i,n){
        ll a;
        cin>>a;
        if(a==-1) left++;
        else if(a==-2) right++;
        else s.insert(a);
    }
    if(left==0){
        cout<<min(right+s.size(),m)<<endl;
        return ;
    }
    if(right==0){
        cout<<min(left+s.size(),m)<<endl;
        return ;
    }
    if(s.size()==0){
        cout<<min(m,max(left,right))<<endl;
        return ;
    }
    ll k=min(max(left+s.size(),right+s.size()),m);
    ll count=0;
    for(auto i=s.begin();i!=s.end();i++){
        count++;
        ll t=min(count+left,*i);
        t+=min(s.size()-count+right,m-*i);
        k=max(k,t);
    }
    cout<<k<<endl;
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