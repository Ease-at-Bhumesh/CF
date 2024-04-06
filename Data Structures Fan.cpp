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
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    string s;
    cin>>s;
    ll res1=0;
    fr(i,n){
        if(s[i]=='1') res1=(res1 xor v[i]);
    }
    fr1(i,1,n) v[i]=(v[i] xor v[i-1]);
    ll rest=v[n-1];
    ll q;
    cin>>q;
    while(q--){
        ll ty;
        cin>>ty;
        if(ty==1){
            ll a,b;
            cin>>a>>b;
            a--;
            b--;
            ll w=v[b];
            if(a>0) w=(w xor v[a-1]);
            res1=(res1 xor w);
        }
        else{
            ll a;
            cin>>a;
            if(a==0){
                cout<<(res1 xor rest)<<" ";
            }
            else{
                cout<<res1<<" ";
            }
        }
    }
    cout<<endl;
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