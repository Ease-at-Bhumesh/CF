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
    string s;
    cin>>s;
    ll start=n;
    ll end=0;
    fr(i,n){
        if(s[i]=='B'){
            start=min(start,i);
            end=max(end,i);
        }
    }
    if(start>end){
        cout<<0<<endl;
        return ;
    }
    else{
        cout<<end-start+1<<endl;
        return ;
    }
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