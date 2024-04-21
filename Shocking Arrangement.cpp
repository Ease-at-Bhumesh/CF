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
    sort(v.begin(),v.end());
    ll np=0;
    fr(i,n) if(v[i]<0) np++;
    if(np==0){
        cout<<"No"<<endl;
        return ;
    }
    ll dd=v[n-1]-v[0];
    ll sum=0;
    ll a=0;
    ll b=n-1;
    cout<<"Yes"<<endl;
    while(a<=b){
        if(sum+v[b]<dd){
            sum+=v[b];
            cout<<v[b]<<" ";
            b--;
        }
        else{
            sum+=v[a];
            cout<<v[a]<<" ";
            a++;
        }
    }
    cout<<endl;
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