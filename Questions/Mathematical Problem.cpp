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
    ll n; cin>>n;
    string s; cin>>s;
    if(s.size()<=2){
        cout<<stoi(s)<<endl;
        return ;
    } 
    if(s.size()>=4){
        fr(i,n){
            if(s[i]=='0'){
                cout<<0<<endl; 
                return ;
            }
        } 
    }
    int res=INT_MAX;
    fr1(i,1,n){
        string k="";
        k+=s[i-1];
        k+=s[i];
        int t=stoi(k);
        fr(j,i-1){
            if(s[j]=='0'){
                cout<<0<<endl;
                return ;
            }
            if(s[j]!='1'){
                if(t==1){
                    t*=s[j]-'0';
                }
                else t+=s[j]-'0';
            }
        }
        fr1(j,i+1,n){
            if(s[j]=='0'){
                cout<<0<<endl;
                return ;
            }
            if(s[j]!='1'){
                if(t==1){
                    t*=s[j]-'0';
                }
                else t+=s[j]-'0';
            }
        }
        res=min(t,res);
    }
    cout<<res<<endl;
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