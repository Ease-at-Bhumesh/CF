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
int dp[11][300001];
int nerd(ll index,ll s_index,vector<set<ll>>&v,ll n,ll m,string &l,string &r){
    if(index==m) return false;
    if(s_index>=0 and dp[index][s_index]!=-1) return dp[index][s_index];
    int start=l[index]-'0';
    int end=r[index]-'0';
    int k=0;
    for(int i=start;i<=end;i++){
        if(v[i].size()==0) return dp[index][s_index]=true;
        auto t=v[i].lower_bound(s_index);
        if(*t==s_index) t++;
        if(t==v[i].end()) return dp[index][s_index]=1;
        k=max(k,nerd(index+1,*t,v,n,m,l,r));
    }
    return dp[index][s_index]=k;
}
void solve(){
    string s;
    cin>>s;
    vector<set<ll>>v(10);
    fr(i,s.size()){
        v[s[i]-'0'].insert(i);
    }
    ll m;
    cin>>m;
    string l,r;
    cin>>l>>r;
    ll s_index=-1;
    ll index=0;
    memset(dp,-1,sizeof(dp));
    if(nerd(index,s_index,v,s.size(),m,l,r)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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