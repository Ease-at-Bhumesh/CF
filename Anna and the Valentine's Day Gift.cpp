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
int nerd(string &s){
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]!='0') return s.size()-1-i;
    }
    return s.size();
}
void solve(){
    ll m,n;
    cin>>n>>m;
    vector<string>a(n);
    fr(i,n) cin>>a[i];
    vector<int>col(n);
    ll ans=0;
    fr(i,n){
        col[i]=nerd(a[i]);
        ans+=a[i].size();
    }
    sort(col.begin(),col.end());
    for(int i=n-1;i>=0;i-=2){
        ans-=col[i];
    }
    if(ans>m){
        cout<<"Sasha"<<endl;
        return ;
    }
    cout<<"Anna"<<endl;
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