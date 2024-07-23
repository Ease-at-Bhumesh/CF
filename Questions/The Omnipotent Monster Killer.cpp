#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N = 3e5 + 5;
vector<int> adj[N];
int a[N];
int dp[N][33];
int temp;

int dfs(int s, int step, int par) {
    int res = (step * a[s]);
    if (dp[s][step] != -1) return dp[s][step];
    for (auto it : adj[s]) {
        if (it == par) continue;
        int minVal = LLONG_MAX;
        for (int j = 1; j <= temp+1; j++) {
            if (j == step) continue;
            minVal = min(minVal, dfs(it, j, s));
        }
        res += minVal;
    }
    return dp[s][step] = res;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        adj[i].clear();
    }
     temp=log2(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= temp+1; j++) {
            dp[i][j] = -1;
        }
    }
    int ans=1e18;
    for(int i=1;i<= (temp+1);i++){
    	ans=min(ans,dfs(1,i,-1));
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}