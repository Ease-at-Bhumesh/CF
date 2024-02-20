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
    ll zero=0;
    ll one=0;
    fr(i,n){
        if(s[i]=='0') zero++;
        else one++;
    }
    fr1(i,pow(2,one),pow(2,n)-pow(2,zero)+2) cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}