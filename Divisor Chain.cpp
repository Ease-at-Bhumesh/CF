#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll n;
    cin>>n;
    ll k=log2(n);
    ll t=0;
    vector<ll>res;
    // cout<<n<<" ";
    res.push_back(n);
    while(n!=(1<<(k))){
        if(n&(1<<t)){
            n-=(1<<t);
            res.push_back(n);
            // cout<<n<<" ";
        }
        t++;
    }
    ll count=k-1;
    while(count>=0){
        n-=(1<<count);
        // cout<<n<<" ";
        res.push_back(n);
        count--;
    }
    cout<<res.size()<<endl;
    fr(i,res.size()) cout<<res[i]<<" ";
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