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
    string s;
    cin>>s;
    ll n=s.size();
    stack<int>st;
    fr(i,n){
        if(s[i]=='+'){
            if(st.empty()) st.push(1);
            else if(st.top()==0) st.push(0);
            else st.push(-1);
        }
        else if(s[i]=='-'){
            int k=st.top();
            st.pop();
            if(!st.empty() and k==1) st.top()=k;
        }
        else if(s[i]=='0'){
            if(!st.empty() and st.top()==1){
                cout<<"NO"<<endl;
                return ;
            }
            if(!st.empty()) st.top()=0;
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }
        else if(s[i]=='1'){
            if(!st.empty() and st.top()==0){
                cout<<"NO"<<endl;
                return ;
            }
            if(!st.empty()) st.top()=1;
        }
    }
    cout<<"YES"<<endl;
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