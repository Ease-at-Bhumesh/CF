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
    ll sum=0;
    ll r_1=0;
    ll r_2=0;
    fr(i,n){
        ll a;
        cin>>a;
        sum+=a;
        if(a%3==1) r_1=1;
        else if(a%3==2) r_2=1;
    }
    if(sum%3==0){
        cout<<0<<endl;
        return ;
    }
    if(sum%3==2){
        cout<<1<<endl;
        return ;
    }
    if(r_1 and sum%3==1){
        cout<<1<<endl;
        return ;
    }
    cout<<2<<endl;
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