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
bool check(string &s,ll n){
    stack<ll>st_o;
    stack<ll>st_c;
    vector<ll>v(n,-1);
    fr(i,n){
        if(v[i]==-1){
            if(s[i]==')') st_c.push(i);
            else{
                if(!st_c.empty()){
                    v[st_c.top()]=1;
                    v[i]=1;
                    st_c.pop();
                }
                else{
                    st_o.push(i);
                }
            }
        }
    }
    fr(i,n){
        if(v[i]==-1) return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(check(s,n)){
        cout<<1<<endl;
        fr(i,n) cout<<1<<" ";
        cout<<endl;
        return ;
    }
    stack<ll>st_o;
    stack<ll>st_c;
    ll bc=1;
    vector<ll>v(n,-1);
    fr(i,n){
        if(s[i]=='(') st_o.push(i);
        else{
            if(!st_o.empty()){
                v[st_o.top()]=bc;
                v[i]=bc;
                st_o.pop();
            }
            else{
                st_c.push(i);
            }
        }
    }
    bc++;
    st_o=stack<ll>();
    st_c=stack<ll>();
    fr(i,n){
        if(v[i]==-1){
            if(s[i]==')') st_c.push(i);
            else{
                if(!st_c.empty()){
                    v[st_c.top()]=bc;
                    v[i]=bc;
                    st_c.pop();
                }
                else{
                    st_o.push(i);
                }
            }
        }
    }
    ll res_1=0;
    ll res=1;
    fr(i,n){
        if(v[i]==-1){
            cout<<-1<<endl;
            return ;
        }
        res=max(res,v[i]);
        if(v[i]==1) res_1=1;
    }
    if(res_1) cout<<res<<endl;
    else cout<<res-1<<endl;
    fr(i,n){
        if(!res_1) cout<<v[i]-1<<" ";
        else cout<<v[i]<<" ";
    }
    cout<<endl;
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