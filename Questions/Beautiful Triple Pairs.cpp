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
    ll n; cin>>n;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    unordered_map<string,int>m;
    ll res=0;
    fr(i,n-2){
        ll a1=v[i]; ll a2=v[i+1]; ll a3=v[i+2];
        string k1="*_"+to_string(a2)+"_"+to_string(a3);
        string k2=to_string(a1)+"_*_"+to_string(a3);
        string k3=to_string(a1)+"_"+to_string(a2)+"_*";
        string k4=to_string(a1)+"_"+to_string(a2)+"_"+to_string(a3);
        res+=m[k1]+m[k2]+m[k3]-3*m[k4];
        if(k1==k2 and k2==k3) m[k1]++;
        else if(k1!=k2 and k1==k3) {m[k1]++; m[k2]++;}
        else if(k1==k2 and k1!=k3) {m[k1]++; m[k3]++;}
        else if(k1!=k2 and k2==k3) {m[k2]++; m[k1]++;}
        else if(k1!=k2 and k2!=k3 and k1!=k3) {m[k1]++; m[k2]++; m[k3]++;}
        m[k4]++;
    }
    cout<<res<<endl;
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