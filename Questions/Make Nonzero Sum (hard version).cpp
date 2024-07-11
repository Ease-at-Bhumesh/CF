#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    ll sum=0;
    fr(i,n) sum+=v[i];
    if(sum%2!=0){
        cout<<-1<<endl;
        return ;
    }
    sum=sum/2;
    vector<int>t;
    ll choice;
    if(sum>0) choice=1;
    else if(sum<0) choice=-1;
    else choice=0;
    ll count=0;
    fr1(i,0,n){
        if(sum==0 or choice!=v[i] or count==1){
            t.push_back(i);
            count=0;
        }
        else{
            if(choice==v[i] and sum>0 and i!=0){
                sum--;
                count++;
            }   
        }
    }
    cout<<t.size()+1<<endl;
    ll start=1;
    fr(i,t.size()){
        cout<<start<<" "<<t[i]+1<<endl;
        start=t[i]+2;
    }
    cout<<start<<" "<<n<<endl;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}