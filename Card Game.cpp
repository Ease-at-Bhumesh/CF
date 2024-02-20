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
// string ans;
// bool nerd(int t,char &c,vector<string>&v,ll &mask,ll temp,string l,string &res){
//     if(t>=v.size()){
//         if(mask==temp){
//             ans=res;
//             return 1;
//         }
//         else{
//             return 0;
//         }
        
//     }
//     if(t%2==0){
//         ll k1=0;
//         for(int i=0;i<v.size();i++){
//             if(! (temp&(1<<i))){
//                 string t1=res+v[i];
//                 k1=nerd(t+1,c,v,mask,temp|(1<<i),v[i],t1) | k1;
//             }
//         }
//         return k1;
//     }
//     else{
//         ll k2=0;
//         for(int i=0;i<v.size();i++){
//             if(! (temp&(1<<i))){
//                 if((v[i][1]==c and l[1]!=c) or (v[i][1]==l[1] and v[i][0]>l[0])){
//                     string t1=res+v[i];
//                     k2=nerd(t+1,c,v,mask,temp|(1<<i),"",t1) | k2;
//                 }
//             }
//         }
//         return k2;
//     }
// }
// void solve(){
//     ll n;
//     cin>>n;
//     char c;
//     cin>>c;
//     n=n*2;
//     vector<string>v(n);
//     fr(i,n) cin>>v[i];
//     ll mask=(1<<n)-1;
//     ans="";
//     string res="";
//     if(nerd(0,c,v,mask,0,"",res)){
//         for(ll i=0;i<2*n;i+=4){
//             cout<<ans[i]<<ans[i+1]<<" "<<ans[i+2]<<ans[i+3]<<endl;
//         }
//     }
//     else cout<<"IMPOSSIBLE"<<endl;
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
#include <bits/stdc++.h>

using namespace std;

char COS;
bool comp (string a, string b) {
    if (a[1] == COS && b[1] != COS) return false;
    if (a[1] != COS && b[1] == COS) return true;
    if (a[1] == b[1]) return a[0] < b[0];
    return a[1] < b[1];
}

void solve(){
    int n;
    cin >> n;
    cin >> COS;

    vector<string> cards;
    for (int i = 0; i < 2 * n; ++i) {
        string r;
        cin >> r;
        cards.push_back(r);
    }

    sort(cards.begin(), cards.end(), comp);

    vector<pair<string, string>> ans;

    int k = 2 * n;
    for (int i = 0; i < k; ++i) {
        if (cards[i][1] == cards[i + 1][1]) {
            ans.push_back(make_pair(cards[i], cards[i + 1]));
            ++i;
        } else {
            --k;
            if (cards[k][1] != COS) {
                cout << "IMPOSSIBLE\n";
                return;
            }
            ans.push_back(make_pair(cards[i], cards[k]));
        }
    }

    for (auto& x : ans) {
        cout << x.first << " " << x.second << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}