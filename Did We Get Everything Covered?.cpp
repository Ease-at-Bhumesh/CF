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
    ll n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    map<char,int>mp;
    string ans="";
    fr(i,m){
        mp[s[i]]++;
        if(mp.size()==k){
            ans+=s[i];
            mp.clear();
        }
    }
    if(ans.size()>=n){
        cout<<"YES"<<endl;
        return ;
    }
    cout<<"NO"<<endl;
    char temp;
    for(int i=0;i<k;i++){
        if(mp[(char)('a'+i)]==0){
            temp=(char)('a'+i);
            break;
        }
    }   
    while(ans.size()<n){
        ans+=temp;
    }
    cout<<ans<<endl;
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