//https://leetcode.com/problems/binary-tree-postorder-traversal/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> result;
        if(root==NULL)
            return result;
        stack<TreeNode *>temp;
        TreeNode * node;
        temp.push(root);
        while(temp.empty()==false)
        {
                node=temp.top();
                temp.pop();
                result.push_back(node->val);
               if (node->left) 
               temp.push(node->left); 
               if (node->right) 
               temp.push(node->right); 
        
        }
        reverse(result.begin(),result.end());
        return result;
    }
};