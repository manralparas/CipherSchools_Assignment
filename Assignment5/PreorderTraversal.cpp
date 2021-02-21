
https://leetcode.com/problems/binary-tree-preorder-traversal/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        if(root==NULL)
        return ans;
        stack <TreeNode *> st;
        st.push(root);
        while(st.empty()==false)
        {
               TreeNode * cur=st.top();
               ans.push_back(cur->val);
               st.pop();
                if(cur->right!=NULL)
               st.push(cur->right);
                if(cur->left!=NULL)
               st.push(cur->left);
                 
        
        
        }
        return ans;
    }
};