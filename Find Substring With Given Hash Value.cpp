#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        reverse(s.begin(),s.end());
        vector<long long>store(k+1,0);
        store[0]=1;
        for(int i=1;i<=k;i++){
            store[i]=(store[i-1]*power)%modulo;
        }
        long long ans=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(i<k){
                ans=(ans+((s[i]-'a'+1)*store[k-i-1])%modulo)%modulo;
                continue;
            }
            if(ans==hashValue){
                string temp=s.substr(i-k,k);
                reverse(temp.begin(),temp.end());
                res=temp;
            }
            ans=(ans-((s[i-k]-'a'+1)*store[k-1])%modulo)%modulo;
            ans=(ans*power)%modulo;
            ans=(ans+(s[i]-'a'+1))%modulo;
        }
        return res;
    }
};