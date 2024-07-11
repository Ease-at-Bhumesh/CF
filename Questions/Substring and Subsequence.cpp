#include <bits/stdc++.h>
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
const ll mod = 998244353;

int nerd1(string &s, string &s2) {
    int k = 0;
    for(int q = 0; q < s2.size(); q++) {
        if(k < s.size() && s2[q] == s[k]) k++;
    }
    return (k == s.size()) ? 1 : 0;
}

int nerd(string s1, string s2) {
    int res = 0;
    int n = s1.size();
    for(int i = 0; i < n; i++) {
        string s = "";
        for(int j = i; j < n; j++) {
            s += s1[j];
            if(nerd1(s, s2)) res = max(j - i + 1, res);
        }
    }
    return res;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << a.size() + b.size() - nerd(a, b) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t-- > 0) {
        solve();
    }
    return 0;
}
