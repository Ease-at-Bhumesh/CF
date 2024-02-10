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
    ll n,k;
    cin>>n>>k;
    ll low=1;
    ll high=n;
    vector<ll>v(n,0);
    for(ll i=0;i<k;i++){
        for(ll j=i;j<n;j+=k){
            if(j%2==0 and v[j]==0){
                v[j]=low;
                low++;
            }
            else if(j%2!=0 and v[j]==0){
                v[j]=high;
                high--;
            }
        }
    }
    fr(i,n) cout<<v[i]<<" ";
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