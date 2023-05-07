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
class BSTIterator {
public:
    vector<int> values;
    int pos;
    
    void inorder(TreeNode* node){
        if(!node) return;
        inorder(node->left);
        values.push_back(node->val);
        inorder(node->right);
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);
        pos = 0;
    }
    
    /** @return the next smallest number */
    int next() {
        return values[pos++];
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return pos < values.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
