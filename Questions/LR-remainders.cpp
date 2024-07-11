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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    fr(i,n){
        cin>>v[i];
    }
    string s;
    cin>>s;
    int left=0;
    int right=n-1;
    fr(i,n){
        if(s[i]=='L') left++;
        else right--;
    }
    if(s[n-1]=='L') left--;
    else right++;
    vector<ll>t;
    t.push_back(left);
    int index=n-2;
    while(index>=0){
        if(s[index]=='L'){
            left--;
            t.push_back(left);
        }
        if(s[index]=='R'){
            right++;
            t.push_back(right);
        }
        index--;
    }
    ll k=1;
    vector<ll>res;
    for(int i=0;i<t.size();i++){
        k=(k*v[t[i]])%m;
        res.push_back(k);
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
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