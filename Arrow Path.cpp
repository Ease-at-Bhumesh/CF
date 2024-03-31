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
    vector<vector<char>>v(2,vector<char>(n));
    fr(i,n) v[0][i]=s1[i];
    fr(i,n) v[1][i]=s2[i];
    ll dx[4]={0,0,-1,1};
    ll dy[4]={1,-1,0,0};
    vector<vector<ll>>vis(2,vector<ll>(n,-1));
    queue<vector<ll>>q;
    q.push({0,0});
    vis[0][0]=1;
    while(!q.empty()){
        auto t=q.front();
        q.pop();
        ll x=t[0];
        ll y=t[1];
        if(x==1 and y==n-1){
            cout<<"YES"<<endl;
            return ;
        }
        for(int i=0;i<4;i++){
            if(x+dx[i]>=0 and x+dx[i]<=1 and y+dy[i]>=0 and y+dy[i]<=n-1){
                if(v[x+dx[i]][y+dy[i]]=='>' and vis[x+dx[i]][y+dy[i]+1]==-1){
                    q.push({x+dx[i],y+dy[i]+1});
                    vis[x+dx[i]][y+dy[i]+1]=1;
                }
                else if(v[x+dx[i]][y+dy[i]]=='<' and vis[x+dx[i]][y+dy[i]-1]==-1){
                    q.push({x+dx[i],y+dy[i]-1});
                    vis[x+dx[i]][y+dy[i]-1]=1;
                }
            }
        }
    }
    cout<<"NO"<<endl;
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