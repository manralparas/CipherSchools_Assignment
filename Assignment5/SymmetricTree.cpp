//https://leetcode.com/problems/symmetric-tree/
class Solution {
private:
    
public:
    bool helper(TreeNode * t1,TreeNode * t2)
    {
       if(!t1&&!t2)
       return true;
       if(!t1||!t2)
       return false;
       return (t1->val==t2->val)&&(helper(t1->right,t2->left))&&(helper(t1->left,t2->right));
        
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
};