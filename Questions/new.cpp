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
const ll mod=998244353;
ll nerd(ll n,ll x,ll y,vector<ll>& a){
    ll i = 0;
    ll maxLen = 0;
    ll currentX = x
    ll currentY = y;
    multiset<int> s;
    if(currentY==0) {

    }
    s.insert(a[0]);
    
    else {
        for (ll j = 1; j < n; j++) {
            if(a[j]==0) continue;
            while (currentY == 0  and currentX < *s.begin() and i <= j) {
                if (*s.begin() == 0) {
                    currentY++;
                } else {
                    currentX += *s.begin();
                }
                s.erase(s.find(a[i]));
                i++;
            }
            s.insert(a[j]);
            if (currentX >= 0 && currentY >= 0) {
                maxLen = max(maxLen, j - i + 1);
            }
            
            if (*s.rbegin() > 0) {
                currentX -= *s.rbegin();
                currentY--;
            }
        }
    }
    
    return maxLen;
}

void solve() {
    ll n; cin >> n;
    ll x; cin >> x;
    ll y; cin >> y;
    vector<ll> v(n);
    fr(i, n) cin >> v[i];
    cout << nerd(n, x, y, v) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
