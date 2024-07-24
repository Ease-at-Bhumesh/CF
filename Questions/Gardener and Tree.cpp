#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n; cin>>n;
    int k; cin>>k;
    vector<vector<int>>v(n+1);
    vector<int>indegree(n+1);
    vector<int>eliminate(n+1,-1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        indegree[a]++;
        indegree[b]++;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<vector<int>>q;
    for(int i=1;i<=n;i++) if(indegree[i]==1) q.push({i,1});
    while(!q.empty()){
        int node=q.front()[0];
        int time=q.front()[1];
        q.pop();
        eliminate[node]=time;
        for(auto fnode:v[node]){
            indegree[fnode]--;
            if(indegree[fnode]==1) q.push({fnode,time+1});
        }
    }
    int res=0;
    for(int i=1;i<=n;i++){
        if(eliminate[i]>k) res++;
    }
    cout<<res<<endl;
    return ;
}
int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}