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
    if(n%2!=0){
        cout<<-1<<endl;
        return ;
    }
    vector<int>v(33,0);
    vector<int>a(33,0);
    vector<int>b(33,0);
    fr(i,33){
        if((n&1)==1) v[i]=1;
        n=(n>>1);
    }
    fr1(i,1,33){
        if(v[i-1]==1 and v[i]==1){
            cout<<-1<<endl;
            return ;
        }
    }
    fr1(i,1,33){
        if(v[i]==1){
            a[i-1]=1;
            b[i-1]=1;
            a[i]=1;
        }
    }
    ll a1=0;
    ll b1=0;
    for (int i=a.size()-1;i>=0;i--) {
        a1=(a1<<1) | a[i];
        b1=(b1<<1) | b[i];
    }
    cout<<a1<<" "<<b1<<endl;
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