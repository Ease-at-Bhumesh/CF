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
bool nerd(char x,vector<string>&v){
    bool k=false;
    for(int i=0;i<v.size();i++){
        if(v[i][0]==x) k=true;
    }
    if(!k) return false;
    k=false;
    for(int i=0;i<v.size();i++){
        if(v[i][v[0].size()-1]==x) k=true;
    }
    if(!k) return false;
    k=false;
    for(int i=0;i<v[0].size();i++){
        if(v[0][i]==x) k=true;
    }
    if(!k) return false;
    k=false;
    for(int i=0;i<v[0].size();i++){
        if(v[v.size()-1][i]==x) k=true;
    }
    if(!k) return false;
    return true;
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<string>v(n);
    fr(i,n){
        cin>>v[i];
    }
    if(nerd('W',v) || nerd('B',v)){
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
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