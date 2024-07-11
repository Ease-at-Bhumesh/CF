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
bool nerd(string &s,ll k){
    ll c=0;
    for(int i=0;i<k;i++){
        for(int j=i+k;j<s.size();j+=k){
            if(s[i]!=s[j]) c++;
        }
    }
    if(c<=1) return true;
    c=0;
    for(int i=s.size()-1;i>=s.size()-k;i--){
        for(int j=i-k;j>=0;j-=k){
            if(s[i]!=s[j]) c++;
        }
    }
    if(c<=1) return true;
    return false;
}
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    fr1(i,1,n+1){
        if(n%i==0){
            if(nerd(s,i)){
                cout<<i<<endl;
                return ;
            }
        }
    }
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