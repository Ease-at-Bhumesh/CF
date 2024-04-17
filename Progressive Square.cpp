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
    unordered_map<ll,ll>m;
    ll mini=INT_MAX;
    fr(i,n*n){
        ll a;
        cin>>a;
        m[a]++;
        mini=min(mini,a);
    }
    for(int i=0;i<n;i++){
        ll p=mini+i*c;
        for(int j=0;j<n;j++){
            if(!m.count(p+j*d)){
                cout<<"NO"<<endl;
                return ;
            }
            else{
                m[p+j*d]--;
                if(m[p+j*d]==0) m.erase(p+j*d);
            }
        }
    }
    cout<<"YES"<<endl;
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