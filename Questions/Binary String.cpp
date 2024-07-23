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
    string s; cin>>s;
    ll n=s.size();
    ll i=0;
    ll j=n-1;
    while(i<n and s[i]=='0') i++;
    while(j>=0 and s[j]=='0') j--;
    if(i>j){
        cout<<0<<endl;
        return ;
    } 
    s=s.substr(i,j+1);
    n=s.size();
    ll cnt=0;
    fr(i,n) if(s[i]=='0') cnt++;
    if(cnt==0){
        cout<<0<<endl;
        return ;
    }
    vector<ll>left;
    vector<ll>right;
    ll t=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0') t++;
        else left.push_back(t);
    }
    left.push_back(t);
    t=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0') t++;
        else right.push_back(t);
    }
    right.push_back(t);
    ll low=0;
    ll high=n-cnt;
    ll optimal=0;
    while(low<=high){
        ll mid=(low+high)/2;
        ll ispossible=0;
        for(ll i=0;i<=mid;i++){
            ll tscore=left[mid-i]+right[i];
            if(cnt-tscore<=mid){
                ispossible=1;
                break;
            }
        }
        if(ispossible){
            high=mid-1;
            optimal=mid;
        }
        else low=mid+1;
    }
    cout<<optimal<<endl;
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