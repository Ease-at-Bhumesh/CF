#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
#define int long long
int n,m;
int p[N],d[N];
int find(int x){
	if(p[x]!=x){
		int fa = p[x];
		p[x] = find(p[x]);
		d[x] += d[fa];
	}
	return p[x];
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		d[i] = 0;
		p[i] = i;
	}
	bool f = 1;
	for(int i=1;i<=m;i++){
		int a,b,x;
		cin>>a>>b>>x;
		int pa = find(a),pb = find(b);
		if(pa==pb){
			if(d[a]-d[b]!=x) f = 0;
		}else{
			int w = x + d[b] - d[a];
			d[pa] = w;
			p[pa] = pb;
		}
	}
	cout<<(f?"YES":"NO")<<'\n';
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
    return 0;
}