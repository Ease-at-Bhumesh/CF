#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll a,b,r;
	cin>>a>>b>>r;
	if(a<b)swap(a,b);
	ll bt=63;
	for(;bt>=0;bt--){
		ll aa=a & (1ll << bt);
		ll bb=b & (1ll << bt);
		if(aa == bb)continue;
		if(aa)break;
	}
	bt--;
	ll x=0;
	for(;bt>=0;bt--){
		ll aa=a & (1ll << bt);
		ll bb=b & (1ll << bt);
		if(aa == bb || x + (1ll << bt) > r)continue;
		if(aa){
			x+=(1ll << bt);
		}
	}
	cout<<abs((a^x) - (b^x))<<endl;
}
int main() {
	ll test = 1;
	cin >> test;
	while(test--) {
		solve();
	}
}