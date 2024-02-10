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
    multiset<ll>left,right;
    ll q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        ll l,r;
        cin>>l>>r;
        if(c=='+'){
            left.insert(l);
            right.insert(r);
            auto it=left.end();
            it--;
            if(*it>*right.begin()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            left.erase(left.lower_bound(l));
            right.erase(right.lower_bound(r));
            if(left.size()==0){
                cout<<"NO"<<endl;
            }
            else{
                auto it=left.end();
                it--;
                if(*it>*right.begin()){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return ;    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}