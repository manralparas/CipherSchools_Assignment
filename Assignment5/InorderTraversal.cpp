https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode * cur = root;
        stack <TreeNode *> s;
        while(s.empty()==false||cur!=NULL){
           while(cur!=NULL)
           {
              s.push(cur);
              cur=cur->left;
           }
          
                cur = s.top();
                ans.push_back(cur->val);
                s.pop();
                cur=cur->right;
            
            
        }
       return ans; 
    }
};