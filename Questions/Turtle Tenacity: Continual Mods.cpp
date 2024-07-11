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
    vector<ll>v(n);
    fr(i,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll c=0;
    fr(i,n){
        if(v[i]!=v[0]) break;
        c++;
    }
    if(c==1){
        cout<<"YES"<<endl;
        return ;
    }
    else{
        bool f=false;
        fr(i,n){
            if(v[i]%v[0]!=0) f=true;
        }
        if(f){
            cout<<"YES"<<endl;
            return ;
        }
        else{
            cout<<"NO"<<endl;
            return ;
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