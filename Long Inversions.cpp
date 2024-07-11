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
int nerd(string s,ll k){
    queue<ll>q;
    for(ll i=0;i<=s.size()-k;i++){
        while(!q.empty() and q.front()<=i-k) q.pop();
        ll change=q.size()%2;
        if((s[i]=='0' and !change) or (s[i]=='1' and change)){
            q.push(i);
        }
    }
    for(ll i=s.size()-k+1;i<s.size();i++){
        while(!q.empty() and q.front()<=i-k) q.pop();
        ll change=q.size()%2;
        if((s[i]=='0' and !change) or (s[i]=='1' and change)){
            return 0;
        }
    }
    return 1;
}
void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    for(ll i=n;i>0;i--){
        if(nerd(s,i)){
            cout<<i<<endl;
            return ;
        }
    }
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