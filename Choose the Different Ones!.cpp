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
    ll n1,n2,k;
    cin>>n1>>n2>>k;
    unordered_map<ll,ll>m1;
    unordered_map<ll,ll>m2;
    fr(i,n1){
        ll d;
        cin>>d;
        m1[d]++;
    }
    fr(i,n2){
        ll d;
        cin>>d;
        m2[d]++;
    }
    ll c1=0;
    ll c2=0;
    fr1(i,1,k+1){
        if(m1.count(i) || m2.count(i)){
            if(m1.count(i)) c1++;
            if(m2.count(i)) c2++;
        }  
        else{
            cout<<"NO"<<endl;
            return ;
        }
    }
    if(c1<k/2 or c2<k/2){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
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