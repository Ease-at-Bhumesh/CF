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
    ll fc=1;
    fr1(i,1,n){
        if(v[i]==v[i-1]) fc++;
        else break;
    }
    ll bc=1;
    for(int i=n-2;i>=0;i--){
        if(v[i]==v[i+1]) bc++;
        else break;
    }
    if(v[0]==v[n-1]){
        if(n-bc-fc>=0){
            cout<<n-bc-fc<<endl;
        }
        else cout<<0<<endl;
        return ;
    }
    else{
        cout<<min(n-bc,n-fc)<<endl;
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