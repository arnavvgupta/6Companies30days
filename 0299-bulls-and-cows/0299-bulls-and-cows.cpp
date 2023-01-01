#include<bits/stdc++.h> 
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int a = 0;
        unordered_map<int,int> mp1,mp2;
        for(int i = 0;i<n;i++){
            if(secret[i] == guess[i]){
                a++;
            }
            else{
                mp1[secret[i]]++;
                mp2[guess[i]]++;
            }
        }
        int b = 0;
        for(auto& x:mp1){
            b+=min(x.second,mp2[x.first]);
        }
        return to_string(a)+"A"+to_string(b)+"B";
    }
};