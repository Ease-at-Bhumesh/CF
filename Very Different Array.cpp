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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(m);
    fr(i,n) cin>>a[i];
    fr(i,m) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll res=0;
    ll count=0;
    ll i1=0;
    ll i2=0;
    ll j1=n-1;
    ll j2=m-1;
    while(count<n){
        if(abs(a[i1]-b[j2])>abs(a[j1]-b[i2])){
            res+=abs(a[i1]-b[j2]);
            i1++;
            j2--;
        }
        else{
            res+=abs(a[j1]-b[i2]);
            i2++;
            j1--;
        }
        count++;
    }
    cout<<res<<endl;
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