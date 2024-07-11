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
void nerd(unordered_map<ll,ll>&m1,unordered_map<ll,ll>&m2){
    for(auto i:m1){
        if(m2.count(i.first)){
            ll g=i.second;
            m1[i.first]-=min(g,m2[i.first]);
            m2[i.first]-=min(g,m2[i.first]);
        }
    }
    for(auto it=m1.begin();it!=m1.end();){
        if(it->second==0) it=m1.erase(it);
        else ++it;
    }
    for(auto it=m2.begin();it!=m2.end();){
        if(it->second==0) it=m2.erase(it);
        else ++it;
    }
}
void solve(){
    ll n;
    cin>>n;
    unordered_map<ll,ll>m1;
    unordered_map<ll,ll>m2;
    fr(i,n){
        ll a;
        cin>>a;
        m1[a]++;
    }
    fr(i,n){
        ll a;
        cin>>a;
        m2[a]++;
    }
    nerd(m1,m2);
    ll res=0;
    for(auto i:m1){
        ll k=static_cast<ll>(log10(abs(i.first)))+1;
        if(k!=1){
            res++;
            m1[k]+=i.second;
            m1[i.first]=0;
        }
    }
    for(auto i:m2){
        ll k=static_cast<ll>(log10(abs(i.first)))+1;
        if(k!=1){
            res++;
            m2[k]+=i.second;
            m2[i.first]=0;
        }
    }
    nerd(m1,m2);
    if(m1.count(1)) m1.erase(1);
    if(m2.count(1)) m2.erase(1);
    for(auto i:m1){
        res+=i.second;
    }
    for(auto i:m2){
        res+=i.second;
    }
    cout<<res<<endl;
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