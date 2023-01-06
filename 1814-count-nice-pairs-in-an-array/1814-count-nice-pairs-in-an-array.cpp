class Solution {
public:
    int rev(int n){
        int rev_num = 0;
        while (n > 0) {
            rev_num = rev_num * 10 + n % 10;
            n = n / 10;
        }
        return rev_num;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int res = 0;
        for (auto n : nums)
            res = (res + m[n - rev(n)]++) % 1000000007;
            
        return res;
    }
};