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
    string s1;
    string s2;
    cin>>s1>>s2;
    string t=s1[0]+s2;
    ll res=1;
    fr1(i,1,n){
        if(s1[i]==s2[i-1]) res++;
        else if(s1[i]<s2[i-1]){
            t[i]=s1[i];
            res=1;
        }
        else break;
    }
    cout<<t<<endl;
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