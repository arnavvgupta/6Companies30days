// class Solution {
// public:
//     bool check(string s){
//         unordered_map<char,int> m;
//         int ch=0;
//         for(int i=0;i<s.size();i++){
//             m[s[i]]=1;
//         }
//         for(auto i:m){
//             ch++;
//         }
//         return ch==3;
//     }
    
//     vector<string> sub(string s){
//         vector<string> ans;
//         for (int i = 0; i < s.size(); i++)
//             for (int len = 1; len <= s.size() - i; len++)
//                 ans.push_back(s.substr(i, len));
//         return ans;
//     }
//     int numberOfSubstrings(string s) {
//         int count=0;
//         vector<string> substrings=sub(s);
//         for(int i=0;i<substrings.size();i++){
//             if(check(substrings[i])){
//                 count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0, j=0;
        vector<int>v(3, 0);
        for(int i=0; i<s.size(); i++){
            v[s[i]-'a']++;
            while(v[0] && v[1] && v[2]){
                cnt+=s.size()-i;
                v[s[j]-'a']--;
                j++;
            }
        }
        return cnt;
    }
};