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

void solve() {
    ll n, k;
    cin >> n >> k;
    ll maxi = 0;
    fr(i, n) maxi += abs(i + 1 - (n - i));
    if (maxi < k || k % 2 != 0) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
    vector<int> res(n, -1);
    ll low = 0;
    k = k / 2;
    ll high = n - 1;

    while (k && low < high) {
        if (k >= (high - low)) {
            res[low] = high + 1;
            res[high] = low + 1;
            k -= (high - low);
            low++;
            high--;
        } else {
            res[low + k] = low + 1;
            res[low] = low + k + 1;
            for (int i = low + 1; i < low + k; ++i) {
                res[i] = i + 1;
            }
            for (int i = low + k + 1; i <= high; ++i) {
                res[i] = i + 1;
            }
            k = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (res[i] == -1) res[i] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
