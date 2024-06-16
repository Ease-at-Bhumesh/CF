#include<bits/stdc++.h>
using namespace std;
int dp[101][30001];
int solve(int index,int saving,vector<int>&v1,vector<int>&v2){
    if(index>=v1.size()) return 0;
    if(dp[index][saving]!=-1) return dp[index][saving];
    int ans=solve(index+1,saving,v1,v2);
    if(saving>=v1[index]) ans=max(v2[index]-v1[index]+solve(index+1,saving-v1[index],v1,v2),ans);
    return dp[index][saving]=ans;
}
int savings(int saving,vector<int>currentValue,vector<int>futureValue){
    vector<int>v1=currentValue;
    vector<int>v2=futureValue;
    int n=v1.size();
    memset(dp,-1,sizeof(dp));
    return solve(0,saving,v1,v2);
}
int main(){
    int s=30;
    vector<int>v1={1,2,4,6};
    vector<int>v2={5,3,5,6};
    cout<<savings(s,v1,v2);
    return 0;
}