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
    string s1,s2;
    cin>>s1>>s2;    
    ll t1=0;
    ll t2=0;
    fr(i,n){
        if(s1[i]==s2[i]){
            if(t2){
                cout<<"NO"<<endl;
                return ;
            }
            t1=1;
        }
        else{
            if(t1){
                cout<<"NO"<<endl;
                return ;
            }
            t2=1;
        }
    }
    vector<pii>v;
    cout<<"YES"<<endl;
    fr(i,n){
        if(s1[i]=='1'){
            v.push_back({i+1,i+1});
            swap(t1,t2);
        }
    }
    if(t2){
        v.push_back({1,1});
        v.push_back({2,n});
        v.push_back({1,n});
    }
    cout<<v.size()<<endl;
    fr(i,v.size()) cout<<v[i].first<<" "<<v[i].second<<endl;
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