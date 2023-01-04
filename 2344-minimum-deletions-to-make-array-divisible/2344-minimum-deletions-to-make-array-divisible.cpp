class Solution {
public:
    int gcd(int a, int b){
      if (a == 0)
        return b;
      return gcd(b % a, a);
    }

    int findGCD(vector<int> arr, int n){
      int result = arr[0];
      for (int i = 1; i < n; i++){
        result = gcd(arr[i], result);
        if(result == 1){
        return 1;
        }
      }
      return result;
    }
 
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int G=findGCD(numsDivide,numsDivide.size());
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(G%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};