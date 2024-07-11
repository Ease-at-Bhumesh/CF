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
    if(n%2!=0){
        cout<<-1<<endl;
        return ;
    }
    vector<ll>v(26,0);
    fr(i,n) v[s[i]-'a']++;
    fr(i,26){
        if(v[i]>n/2){
            cout<<-1<<endl;
            return ;
        }
    }
    v=vector<ll>(26,0);
    ll res=1;
    fr(i,n/2){
        if(s[i]==s[n-i-1]){
            res++;
            v[s[i]-'a']++;
        }
    }
    cout<<max(res/2,*max_element(v.begin(),v.end()))<<endl;
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