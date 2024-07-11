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
const ll mod=998244353;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    priority_queue<int, vector<int>, greater<int>> wood;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L') wood.push(i + 1);
    }
    wood.push(n + 1);
    s='L'+s;
    int i = 0;
    int water = 0;
    while(i<n+1){
        int nextwood = wood.top();
        if(nextwood - i <= m and s[i]=='L'){
            wood.pop();
            i = nextwood;
        } else {
            if(s[i]=='L') i+=m;
            else if(s[i]=='W'){
                water++;
                i++;
                if(water>k){
                    cout<<"NO"<<endl;
                    return ;
                }
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
