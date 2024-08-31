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
    TreeNode* funct(vector<int> &nums, int l , int r){
        if(l>r) return NULL;
        int mid = (l+r) / 2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = funct(nums, l, mid-1);
        root->right = funct(nums, mid+1, r);

        return root;
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int sz = nums.size();
        TreeNode* root = funct(nums, 0, sz-1);
        return root;
    }
};