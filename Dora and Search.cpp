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
    ll l=0;
    ll r=n-1;
    ll mini=1;
    ll maxi=n;
    while(l<=r){
        if(l<=r && v[l]==maxi){
            maxi--;
            l++;
        }
        else if(l<=r && v[l]==mini){
            mini++;
            l++;
        }
        else if(r>=l && v[r]==maxi){
            maxi--;
            r--;
        }
        else if(r>=l && v[r]==mini){
            mini++;
            r--;
        }
        else if(l<=r && v[l]!=mini && v[l]!=maxi && v[r]!=mini && v[r]!=maxi){
            cout<<l+1<<" "<<r+1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
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
