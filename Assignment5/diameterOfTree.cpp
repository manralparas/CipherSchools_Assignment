
class Solution {
private:
    int height(TreeNode * root , int & ans)
    {
        if(root==NULL) 
          return 0;
        int leftHeight = height(root->left,ans);
        int rightHeight = height(root->right,ans);
        ans = max(ans,leftHeight+rightHeight);
        
        return 1+max(leftHeight,rightHeight);
        
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        height(root,ans);
        return ans;
        
    }
};