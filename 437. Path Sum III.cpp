class Solution {
public:
    int pathSumFrom(TreeNode* root, int sum){
        if(!root) return 0;
        return (int)(root->val == sum) +
            pathSumFrom(root->left, sum - root->val) + 
            pathSumFrom(root->right, sum - root->val);
    }
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return pathSumFrom(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
};
