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
    ll a,b,c;
    cin>>a>>b>>c;
    ll res=0;
    res+=a;
    ll k=b%3;
    if(c==0 and k!=0){
        cout<<-1<<endl;
        return ;
    }
    else if(k==1 and c<2){
        cout<<-1<<endl;
        return ;
    }
    else if(k==2 and c<1){
        cout<<-1<<endl;
        return ;
    }
    k=b+c;
    if(k%3==0) cout<<res+(k/3)<<endl;
    else cout<<res+(k/3)+1<<endl;
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