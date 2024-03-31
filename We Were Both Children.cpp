#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,ans=0;
		cin>>n;
		map<ll,int>mp,a;
		for(int i=1;i<=n;i++)
		{
			ll now;
			cin>>now;
			mp[now]++;
		}
		for(auto i:mp)
		{
			for(int j=i.first;j<=n;j+=i.first){
				a[j]+=i.second;
				ans=max(ans,a[j]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}