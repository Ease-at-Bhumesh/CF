#include <bits/stdc++.h>
using namespace std;
int r=0;
set<long long> v;
void binarypalindrome(long long s, long long e, long long x){
    if(s>e){
        v.insert(x);
        return;
    }
    binarypalindrome(s+1,e-1,x);
    if(s==e) binarypalindrome(s+1,e-1, x+ pow(2,s));
    else binarypalindrome(s+1,e-1, x+ pow(2,s)+ pow(2,e));
    return;
}
long long solve(long long n){
    if(r==0){
        v.insert(0);v.insert(1);v.insert(3);
        for(long long i=3; i<32; i++){
            long long c= pow(2,i-1)+1;
            binarypalindrome(1,i-2, c);
        }
        r++;
    }
    auto ptr=v.lower_bound(n);
    auto ptr2= ptr--;
    if(abs(n-*ptr)<abs(n-*ptr2)) return abs(n-*ptr);
    else return abs(n-*ptr2);
}
int main(){
    long long n,t;
    cout<<endl;
    cin>>t;
    while (t--){
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}