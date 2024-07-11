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
ll nerd(ll n){
    ll ans=0;
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        ll digit=s[i]-'0';
        if(digit>4) digit--;
        ans+=digit*pow(9,s.size()-i-1);
        if(s[i]=='4') break;
        if(i==s.size()-1) ans++;
    }
    return ans-1;
}
void solve(){
    ll k;
    cin>>k;
    ll low=k;
    ll high=100*k;
    ll res=k;
    while(high>=low){
        ll mid=(low+high)/2;
        if(nerd(mid)>=k){
            res=mid;
            high=mid-1;
        }
        else low=mid+1;
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
