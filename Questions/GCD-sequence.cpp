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
int check(vector<ll> &a){
    ll n=a.size() ;
    for(int i=2;i<n;i++){
        if(__gcd(a[i-2],a[i-1])>__gcd(a[i-1],a[i])) return i-1;
    }
    return -1;
}
void solve(){
    ll n; cin>>n;
    vector<ll> a(n),b(n);
    for(auto &i : a) cin>>i;
    int viol=check(a);
    if(viol==-1){
        cout<<"YES"<<endl ;
        return;
    }
    for(int i=viol-1;i<=viol+1;i++){
        b=a;
        b.erase(b.begin()+i) ;
        if(check(b)==-1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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