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
    ll c,r;
    cin>>r>>c;
    vector<vector<ll>>v(r,vector<ll>(c));
    priority_queue<vector<ll>>q;
    fr(i,r){
        fr(j,c){
            cin>>v[i][j];
            q.push({v[i][j],i,j}); 
        }
    }
    vector<vector<ll>>vis(r,vector<ll>(c,-1));
    vector<ll>dx={-1,-1,0,0};
    vector<ll>dy={0,0,-1,1};
    ll res=0;
    while(!q.empty()){
        auto t=q.top();
        ll row=t[1];
        ll col=t[2];
        ll value=t[0];
        q.pop();
        if(vis[row][col]==-1){
            fr(i,4){
                if(row+dx[i]>=0 and row+dx[i]<r and col+dy[i]>=0 and col+dy[i]<c and vis[row+dx[i]][col+dy[i]]==-1){
                    if(value-v[row+dx[i]][col+dy[i]]>1){
                        res+=(value-v[row+dx[i]][col+dy[i]]-1);
                        v[row+dx[i]][col+dy[i]]=value-1;
                        q.push({value-1,row+dx[i],col+dy[i]});                
                    }
                }
            }
            vis[row][col]=1;
        }
    }
    cout<<res<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}