#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int t,n,m,k;
int a[N],b[N],c[N];
int main() {
	cin>>t;a[0]=1;
	while(t--) {
		cin>>n>>m>>k;
		int s=m,ans=2e9,cnt=0;
		for(int i=1;i<=m+1;i++) {
			if(i<=m) cin>>a[i];
			else a[m+1]=n+1;
			b[i]=a[i]-a[i-1]-1;
			if(i>=2) c[i-1]=a[i]-a[i-2]-1;
			s+=b[i]/k;
		}
		if(b[1]>=0) s++;
		for(int i=1;i<=m;i++) {
			int res=s-b[i]/k-b[i+1]/k+c[i]/k-1+(i==1&&b[1]<0);
			if(ans>res) ans=res,cnt=0;cnt+=(ans==res);
		}
		cout<<ans<<' '<<cnt<<endl;
	}
	return 0;
}