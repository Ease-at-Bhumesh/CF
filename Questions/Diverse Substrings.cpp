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
    string s;
    cin>>s;
    ll res=0;
    fr(i,n){
        unordered_map<char,ll>m;
        ll maxi=0;
        fr1(j,i,min(100+i+1,n)){
            m[s[j]]++;
            maxi=max(m[s[j]],maxi);
            if(maxi<=m.size()) res++;
        }
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

