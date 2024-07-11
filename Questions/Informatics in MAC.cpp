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
    fr(i,n) cin>>v[i];
    unordered_map<ll,ll>m;
    fr(i,n){
        m[v[i]]=1;
    }
    ll e=-1;
    fr(i,n){
        if(!m.count(i)){
            e=i;
            break;
        }
    }
    m.clear();
    ll division=0;
    ll start=0;
    vector<pii>res;
    fr(i,n){
        if(v[i]<e) m[v[i]]++;
        if(m.size()==e){
            division++;
            res.push_back({start+1,i+1});
            m.clear();
            start=i+1;
        }
    }
    if(division<=1){
        cout<<-1<<endl;
        return ;
    }
    cout<<division<<endl;
    fr(i,res.size()){
        if(i!=res.size()-1) cout<<res[i].first<<" "<<res[i].second<<endl;
        else cout<<res[i].first<<" "<<n<<endl;
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