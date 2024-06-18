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
    ll n,c;cin>>n>>c;
    vector<int>v(n);
    fr(i,n) cin>>v[i];
    multiset<ll>send;
    multiset<ll>sstart;
    vector<int>res(n,0);
    v[0]+=c;
    fr1(i,1,n) send.insert(v[i]);
    ll current=v[0];
    ll sum=0;
    fr(i,n){
        ll temp=current;
        if(sstart.size()){
            auto it=sstart.end();
            it--;
            if(*it>=current){
                res[i]=sstart.size();
                temp+=sum;
            }
        }
        if(send.size() and send.upper_bound(temp)!=send.end()){
            if(res[i]==0){
                auto it=send.end();
                it--;
                if(temp+sum>=*it) res[i]=sstart.size();
                else res[i]=sstart.size()+1;
            }
            else{
                res[i]++;
            }
        }
        sum+=current;
        sstart.insert(current);
        if(i!=n-1){
            current=v[i+1];
            send.erase(send.find(current));
        }
    }
    fr(i,n) cout<<res[i]<<" ";
    cout<<endl;
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