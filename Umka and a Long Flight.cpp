// Don't able to understand it ...............

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll f[50]={1,1};
void init()
{
	for(int i=2;i<=45;i++) f[i]=f[i-1]+f[i-2];
}
bool slove(ll n,ll x,ll y)
{
	if(n==1) return true;
	if(y<=f[n]&&f[n+1]-y<f[n]) return false;
	if(y>f[n]) y-=f[n];
	return slove(n-1,y,x);
}
int main()
{
	init();
	int t;
	cin>>t;
	while(t--){
		ll n,x,y;
		cin>>n>>x>>y;
		if(slove(n,x,y)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}