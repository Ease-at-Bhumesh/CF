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
vector<vector<ll>>dp;
vector<vector<ll>>sp;
ll nerd(ll index,ll hap,ll cos,vector<ll>&c,vector<ll>&h,ll salary){
    if(index==c.size()-1){
        if(cos>=c[index]) return h[index];
        return 0;
    }
    if(dp[index][hap]!=-1 and sp[index][hap]>=cos) return dp[index][hap];
    ll take=0; ll nottake=nerd(index+1,hap,cos+salary,c,h,salary);
    if(cos>=c[index]) take=nerd(index+1,hap+h[index],cos+salary-c[index],c,h,salary)+h[index];
    sp[index][hap]=cos;
    return dp[index][hap]=max(take,nottake);
}
void solve(){
    ll m,x; cin>>m>>x;
    vector<ll>c(m);
    vector<ll>h(m);
    ll sum=0;
    fr(i,m){
        cin>>c[i];
        cin>>h[i];
        sum+=h[i];
    }    
    dp.assign(m+1,vector<ll>(sum+1,-1));
    sp.assign(m+1,vector<ll>(sum+1,-1));
    cout<<nerd(0,0,0,c,h,x)<<endl;
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