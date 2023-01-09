class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> fm;
        unordered_map<int,int> hm;
        for(int i=0;i<nums.size();i++){
            fm[nums[i]]++;
        }
        for(auto i:nums){
            if(fm[i]==0){
                continue;
            }
            
            if(hm[i]>0){
                fm[i]--;
                hm[i]--;
                hm[i+1]++;
            }
            
            else{
                if(fm[i]!=0 && fm[i+1]!=0 && fm[i+2]!=0){
                    fm[i]--;
                    fm[i+1]--;
                    fm[i+2]--;
                    
                    hm[i+3]++;  
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
        
    }
};