
class Solution {
 public
  vectorvectorint levelOrder(TreeNode root) {
    if (root == nullptr)
      return {};

    vectorvectorint ans;
    queueTreeNode q{{root}};

    while (!q.empty()) {
      vectorint currLevel;
      for (int sz = q.size(); sz  0; --sz) {
        TreeNode node = q.front();
        q.pop();
        currLevel.push_back(node-val);
        if (node-left)
          q.push(node-left);
        if (node-right)
          q.push(node-right);
      }
      ans.push_back(currLevel);
    }

    return ans;
  }
};