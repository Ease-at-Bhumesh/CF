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
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    for(ll i=1;i<=n/2;i++){
        ll cnt=0;
        for(ll j=0;j+i<n;j++){
            if(s[j]==s[j+i] or s[j]=='?' or s[i+j]=='?'){
                cnt++;
            }
            else cnt=0;
            if(cnt>=i) ans=i*2;
        }
    }
    cout<<ans<<endl;
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