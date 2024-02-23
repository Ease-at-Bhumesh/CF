// Time Limit Exceeded in this case
// #include<bits/stdc++.h>
// #define ll long long
// #define pii pair<ll,ll>
// #define fs first
// #define ss second
// #define fr(i,n) for(ll i=0;i<n;i++)
// #define fr1(i,a,n) for(ll i=a;i<n;i++)
// #define rfr(i,n,a) for(ll i=n;i>=a;i--)
// #define mp make_pair
// #define pb push_back
// #define all(v) v.begin(),v.end()
// using namespace std;
// const  ll mod=998244353;
// void solve(){
//     ll n;
//     cin>>n;
//     set<ll>s;
//     fr(i,n){
//         ll k;
//         cin>>k;
//         s.insert(k);
//     }
//     ll res=0;
//     for(auto it=s.begin();it!=s.end();it++){
//         auto k=s.lower_bound(*it+n);
//         k--;
//         if(*k>*it+n-1) k--;
//         long long dis=distance(it,k);
//         res=max(dis,res);   
//     }
//     cout<<res+1<<endl;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t=1;
//     cin>>t;
//     while(t-->0){
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int t,n,m,ans,a[200001];
int main(){
	cin>>t;
	while(t--){
		cin>>n, ans=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1, a+1+n);
		m = unique(a+1, a+1+n)-a-1;
		int j = 1;
		for(int i=1;i<=m;i++){
			while(j <= m && a[i]-a[j] > n-1) j++;
			ans = max(ans, i-j+1);
		}
		cout<<ans<<endl;
	}
	return 0;
}