/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void tree(vector<int>& array,TreeNode* root1){
        if(root1==NULL){
            return;
        }
        tree(array,root1->left);
        array.push_back(root1->val);
        tree(array,root1->right);   
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        vector<int> arr2;
        tree(arr1,root1);
        tree(arr2,root2);
        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        sort(arr1.begin(),arr1.end());
        return arr1;
        
    }
};