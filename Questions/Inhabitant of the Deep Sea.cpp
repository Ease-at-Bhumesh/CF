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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    ll res=0;
    ll i=0;
    ll j=n-1;
    ll ch=0;
    while(i<=j and k>0){
        if(i<j){
            ll t1,t2;
            if(ch==0){
                t1=(v[i])*2-1;
                t2=(v[j])*2;
            }
            else{
                t1=(v[i])*2;
                t2=(v[j])*2-1;
            }
            if(t1<t2){
                v[j]-=v[i];
                if(ch==0) v[j]++;
                ch=1;
                k-=t1;
                i++;
                res++;
            }
            else{
                v[i]-=v[j];
                if(ch==1) v[i]++;
                ch=0;
                k-=t2;
                j--;
                res++;
            }
        }
        else{
            if(k>=v[i]){
                res++;
                k-=v[i];
                i++;
            }
            break;
        }
    }
    // cout<<" bhue"<<endl;
    if(k<0) res--;
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