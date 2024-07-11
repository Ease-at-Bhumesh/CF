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
ll nerd(string &s,char c){
    ll n=s.size();
    ll count=0;
    ll t=0;
    fr(i,n){
        if(s[i]==c){
            count=max(t,count);
            t=0;
        }
        else t++;
    }
    count=max(t,count);
    if(count==0) return 0;
    ll result = log2(count)+1;
    return result;
}
void solve(){
    string s;
    cin>>s;
    ll res=INT_MAX;
    fr(i,26){
        res=min(nerd(s,char(i+'a')),res);
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