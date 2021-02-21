
class Solution {
private:
    bool dfs(TreeNode * root,TreeNode * destination,vector<TreeNode *> &path)
    {
       if(root==NULL)
       return false;
        path.push_back(root);
        if(root->val==destination->val)
         return true;
        if(dfs(root->left,destination,path)||dfs(root->right,destination,path))
        return true;
       path.pop_back(); 
       return false; 
        
        
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *> paths1,paths2;
      if(!dfs(root,p,paths1)||!dfs(root,q,paths2))
        return NULL;
        int i;
      for( i=0;i<paths1.size()&&i<paths2.size();i++)
      {
          if(paths1[i]!=paths2[i])
            break;
      }
        return paths1[i-1];
        
        
        
    }
};