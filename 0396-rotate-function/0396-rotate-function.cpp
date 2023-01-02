class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        if(nums.size()==0 ||nums.size()==1 ){
            return 0;
        }
        int sum=0;
        int fz=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            fz+=i*nums[i];
        }
        vector<int> dp(nums.size(),0);
        dp[0]=fz;
        int m=dp[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=dp[i-1]+sum-nums.size()*(nums[nums.size()-i]);
            m=max(m,dp[i]);
        }
        return m;
        
    }
};