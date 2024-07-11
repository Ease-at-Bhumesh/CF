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
int a[200010];
int b[200010];
long long int ans[200010];
int f[200010];
void solve(){
int n,m;
    cin>>n>>m;
    for(int i=0; i<=n+m; i++) cin>>a[i];
    for(int i=0; i<=n+m; i++) cin>>b[i];
    int x=0;
    int y=0;
    vector<int>va;
    vector<int>vb;
    ans[n+m]=0;
    for(int i=0; i<n+m; i++) {
        if(x==n) {
            ans[n+m]+=b[i];
            if(a[i]>b[i]) vb.push_back(i);
            f[i]=2;
            y++;
        } else if(y==m) {
            ans[n+m]+=a[i];
            if(a[i]<b[i]) va.push_back(i);
            f[i]=1;
            x++;
        } else if(a[i]>b[i]) {
            ans[n+m]+=a[i];
            f[i]=1;
            x++;
        } else {
            ans[n+m]+=b[i];
            f[i]=2;
            y++;
        }
    }
    for(int i=n+m-1;i>=0;i--){
        if(f[i]==2){
            ans[i]=ans[n+m]-b[i];
            auto it=upper_bound(va.begin(),va.end(),i);
            if(it!=va.end()){
                ans[i]+=b[*it]-a[*it];
                ans[i]+=a[n+m];
                
            } 
            else ans[i]+=b[n+m];
        }
        else{
            ans[i]=ans[n+m]-a[i];
            auto it=upper_bound(vb.begin(),vb.end(),i);
            if(it!=vb.end()){
                ans[i]+=a[*it]-b[*it];
                ans[i]+=b[n+m];
            } 
            else ans[i]+=a[n+m];
        }
    }
    for(int i=0;i<=n+m;i++){
        if(i!=0) cout<<" ";
        cout<<ans[i];
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