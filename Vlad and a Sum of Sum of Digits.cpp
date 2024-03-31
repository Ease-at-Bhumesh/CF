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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    vector<ll>v(200001);
    for(int i=1;i<v.size();i++){
        ll t=0;
        for(int j=i;j>0;j=j/10){
            t+=j%10;
        }
        v[i]=t+v[i-1];
    }
    while(t-->0){
        ll a;
        cin>>a;
        cout<<v[a]<<endl;
    }
    return 0;
}