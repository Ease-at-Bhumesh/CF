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
    unordered_map<ll,ll>m;
    fr(i,n){
        ll a;
        cin>>a;
        m[a]++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        if(x*x-4*y<0){
            cout<<0<<endl;
        }
        else if(x*x-4*y==0){
            if(x%2!=0){
                cout<<0<<" ";
            }
            else{
                x=x/2;
                cout<<(m[x]*(m[x]-1))/2<<" ";
            }
        }
        else{
            ll r=sqrt(x*x-4*y);
            if(r*r!=x*x-4*y) cout<<0<<" ";
            else{
                ll a=(x-r);
                ll b=(x+r);
                if(a%2!=0 or b%2!=0) cout<<0<<" ";
                else{
                    a=a/2;
                    b=b/2;
                    cout<<m[a]*m[b]<<" ";
                }
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