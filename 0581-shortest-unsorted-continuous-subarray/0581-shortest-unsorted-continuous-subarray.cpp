// class Solution {
// public:
//     int findUnsortedSubarray(vector<int>& nums) {
//         vector<int> v=nums;
//         sort(v.begin(),v.end());
//         int st=0;
//         int en=v.size()-1;
//         while(nums[st]==v[st] && st<=v.size()-1){
//             st++;
//         }
//         while(nums[en]==v[en] && en>=0){
//             en--;
//         }
        
//         if(en<0 || st>v.size()-1){
//             return 0;
//         }
//         return en-st+1;    
//     }
// };

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(), v.end());
        int st=0, en=v.size()-1;
        while(st<=v.size()-1 && v[st]==nums[st]){
            st++;
        }
        while(en>=0 && v[en]==nums[en]){
            en--;
        }
        if(en<0 || st>v.size()-1){return 0;}
        return en-st+1;
    }
};