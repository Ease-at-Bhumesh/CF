#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+10;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	while(T--){
		int n;cin>>n;
		map<int,priority_queue<int,vector<int>,greater<int>>> mp;
		vector<int> a(n+1);
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mp[a[i]>>2].push(a[i]);
		}
		for(int i=1;i<=n;i++){
			cout<<mp[a[i]>>2].top()<<" ";
			mp[a[i]>>2].pop();
		}
		cout<<"\n";
	}
}