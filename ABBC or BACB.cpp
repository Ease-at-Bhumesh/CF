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
vector<int> nerd(string &s){
    int n=s.size();
    stack<char>st;
    vector<int>r(n);
    int res=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            if(st.size() and st.top()=='B'){
                st.pop();
                st.push('C');
                st.push('B');
                res++;
            }
            else{
                st.push('A');
            }
        }
        else{
            if(st.size() and st.top()=='A'){
                while(st.size() and st.top()=='A'){
                    st.pop();
                    res++;
                }
                st.push('C');
            }
            else{
                st.push('B');
            }
        }
        r[i]=res;
    }
    return r;
}
void solve(){
    string s;cin>>s;
    string t=s;
    int n=s.size();
    reverse(t.begin(),t.end());
    auto v1=nerd(s);
    auto v2=nerd(t);
    reverse(v2.begin(),v2.end());
    int res=max(v1[n-1],v2[0]);
    for(int i=0;i<n-1;i++) res=max(res,v1[i]+v2[i+1]);
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