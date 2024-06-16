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
class segment{
public:
    vector<ll>seg;
    ll n;
    segment(vector<ll>v){
        n=v.size();
        seg.resize(4*n);
        build(0,0,n-1,v);
    }
    void build(ll index,ll low,ll high,vector<ll>&v){
            if(low==high){
                seg[index]=v[low];
                return ;
            }
        ll mid=(high-low)/2+low;
        build(2*index+1,low,mid,v);
        build(2*index+2,mid+1,high,v);
        seg[index]=min(seg[2*index+1],seg[2*index+2]);
    }
    ll query(ll index,ll low,ll high,ll l,ll r){
        if(low>r || high<l) return LLONG_MAX;
        if(low>=l && high<=r) return seg[index];
        ll mid=(high-low)/2+low;
        ll left=query(2*index+1,low,mid,l,r);
        ll right=query(2*index+2,mid+1,high,l,r);
        return min(left,right);
    }
    ll query(ll l,ll r){
        return query(0,0,n-1,l,r);
    }
    void update(ll index,ll low,ll high,ll actualindex,ll val){
        if(low==high){
            seg[index]=val;
            return ;
        }
        ll mid=(high-low)/2+low;
        if(actualindex<=mid) update(2*index+1,low,mid,actualindex,val);
        else update(2*index+2,mid+1,high,actualindex,val);
        seg[index]=min(seg[2*index+1],seg[2*index+2]);
    }
    void update(ll actualindex,ll val){
        update(0,0,n-1,actualindex,val);
    }
};
void solve(){
    vector<ll>v={1,2,3,4,5};
    segment k(v);
    fr(i,9) cout<<k.seg[i]<<" ";
    cout<<endl;
    cout<<k.query(2,3)<<endl;
    k.update(2,-1);
    cout<<k.query(2,3)<<endl;
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