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
bool nerd(vector<ll>&v,ll mid){
    ll start=v[0]+mid;
    ll count=1;
    fr1(i,1,v.size()){
        if(start+mid<v[i]){
            if(count>=3) return false;
            else{
                start=v[i]+mid;
                count++;
            }
        }
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    set<ll>s;
    fr(i,n){
        ll k;
        cin>>k;
        s.insert(k);
    }
    vector<ll>v;
    for(auto i:s) v.push_back(i);
    if(v.size()<=3){
        cout<<0<<endl;
        return ;
    }
    ll low=0;
    ll high=1e9;
    ll res=INT_MAX;
    while(low<=high){
        ll mid=(low+high)/2;
        if(nerd(v,mid)){
            res=mid;
            high=mid-1;
        }
        else low=mid+1;
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