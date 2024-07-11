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
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    ll cost=0;
    ll i=0;
    if(v[i]==1) i++;
    else cost+=d;
    ll last=1;
    // cout<<cost<<endl;
    set<ll>s;
    while(i<n){
        if(v[i]==last+1){
            i++;
            last++;
        }
        else if(v[i]==last){
            ll c2=cost+(n-i)*c;
            s.insert(c2);
            i++;
            cost+=c;
        }
        else{
            ll c1=cost+(v[i]-last-1)*d;
            ll c2=cost+(n-i)*c;
            // cout<<cost<<" "<<c1<<" "<<c2<<endl;
            // if(c2<=c1){
            //     cout<<c2<<endl;
            //     return ;
            // }
            s.insert(c2);
            cost=c1;
            last=v[i];
            i++;
        }
        // if(i==1) cout<<cost<<" hello "<<endl;
    }
    s.insert(cost);
    cout<<*s.begin()<<endl;
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