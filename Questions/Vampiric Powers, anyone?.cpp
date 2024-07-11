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
class TrieNode{
    public:
    int value;
    TrieNode *arr[2];
};
TrieNode *newNode(){
    TrieNode *temp=new TrieNode;
    temp->value=0;
    temp->arr[0]=temp->arr[1]=NULL;
    return temp;
}
void insert(TrieNode *root, int pre_xor){
    TrieNode *temp = root;
    for (int i=31;i>=0;i--){
        bool val=pre_xor&(1<<i);
        if(temp->arr[val]==NULL) temp->arr[val]=newNode();
        temp=temp->arr[val];
    }
    temp->value = pre_xor;
}
int query(TrieNode *root, int pre_xor){
    TrieNode *temp=root;
    for (int i=31;i>=0;i--){
        bool val=pre_xor&(1<<i);
        if(temp->arr[1-val]!=NULL) temp=temp->arr[1-val];
        else if(temp->arr[val]!=NULL) temp=temp->arr[val];
    }
    return pre_xor^(temp->value);
}
void solve(){
    ll n;
    cin>>n;
    vector<int>v(n);
    fr(i,n) cin>>v[i];
    TrieNode *root=newNode();
    insert(root,0);
    int result=INT_MIN,pre_xor=0;
    fr(i,n){
        pre_xor=pre_xor^v[i];
        insert(root,pre_xor);
        result=max(result,query(root,pre_xor));
    }
    cout<<result<<endl;
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