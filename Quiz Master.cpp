#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, m, i, j, u, ans;
    
    vector<ll> fac[100001];
    
    for(i=1; i<=100000; i++)
    {
        for(j=i; j<=100000; j+=i){
            fac[j].push_back(i);
        }
    }
    
    cin>>t;
    
    for(;t--;)
    {
        ans=1000000;
        cin>>n>>m;
        
        ll a[n], c[m+1];
        
        for(i=1; i<=m; i++){
            c[i]=0;
        }
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        u=0;
        
        for(i=0,j=0;i<n;i++)
        {
            while(j<n && u<m){
                
                for(auto& it : fac[a[j]]){
                    if(it>m){
                        break;
                    }
                    c[it]++;
                    if(c[it]==1){
                        u++;
                    }
                }
                j++;
            }
            
            if(u==m){
                ans=min(ans, a[j-1]-a[i]);
            }
            
            for(auto& it : fac[a[i]]){
                if(it>m){
                    break;
                }
                c[it]--;
                if(c[it]==0){
                    u--;
                }
            }
        }
        
        if(ans==1000000)
        cout<<"-1\n";
        else
        cout<<ans<<"\n";
        
    }
}