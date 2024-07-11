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
class DisjointSet {
public:
    vector<int>  parent, size;
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
void solve(){
    int n;
    cin>>n;
    DisjointSet ds(n+1);
    int res=1;
    int cyclelen=0;
    int maxi=0;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        ll a; cin>>a;
        v[i]=a;
        if(ds.findUPar(a)==ds.findUPar(i)){
            if(v[a]!=i){
                res++;
                cyclelen+=ds.size[ds.findUPar(a)];
            }
        }
        else ds.unionBySize(a,i);
    }
    set<int>s;
    for(int i=1;i<=n;i++){
        s.insert(ds.findUPar(i));
    }
    maxi=s.size();
    if(cyclelen==n) res--;
    cout<<res<<" "<<maxi<<endl;
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