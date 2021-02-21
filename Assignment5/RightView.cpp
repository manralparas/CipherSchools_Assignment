
https://leetcode.com/problems/binary-tree-right-side-view/
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode *> bfs;
        bfs.push(root);
        while(!bfs.empty())
        {
           int n=bfs.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode * temp = bfs.front();
               if(i==n) 
               ans.push_back(temp->val);
               bfs.pop();
               if(temp->left)
               bfs.push(temp->left);
               if(temp->right)
               bfs.push(temp->right);
                
            }
            
        }
        
           return ans; 
    }
};