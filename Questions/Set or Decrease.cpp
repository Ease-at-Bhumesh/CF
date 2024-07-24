#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n; cin>>n;
    int k; cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int mini=v[0];
    vector<int>pre(n,0);
    for(int i=1;i<n;i++) pre[i]=v[i];
    for(int i=1;i<n;i++) pre[i]+=pre[i-1];
    if(n==1){
        if(mini<=k){
            cout<<0<<endl;
            return ;
        }
        else{
            cout<<mini-k<<endl;
            return ;
        }
    }
    if(pre[n-1]+mini<=k){
        cout<<0<<endl;
        return ;
    }
    int low=0;
    int high=mini+n-1;
    int optimal=high;
    while(low<=high){
        int mid=(low+high)/2;
        int ispossible=0;
        for(int i=0;i<n && i<=mid;i++){
            int temp=mini;
            temp-=(mid-i);
            int q=temp*(i+1)+pre[n-1-i];
            if(q<=k){
                ispossible=1;
            }
        }
        if(ispossible){
            high=mid-1;
            optimal=mid;
        }
        else low=mid+1;
    }
    cout<<optimal<<endl;
}
int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}