//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
class Solution {
private:
    TreeNode *helper(vector<int> &preorder, vector<int> &inorder, int start, int end, int &index, unordered_map<int, int> &dict) {
        if (start > end) return NULL;
        TreeNode *node = new TreeNode(preorder[index]);
        int i = dict[preorder[index++]];
        node -> left = helper(preorder, inorder, start, i - 1, index, dict);
        node -> right = helper(preorder, inorder, i + 1, end, index, dict);
        return node;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        unordered_map<int, int> dict;
        for (int i = 0; i < inorder.size(); ++i) 
            dict[inorder[i]] = i;
        return helper(preorder, inorder, 0, preorder.size() - 1, index, dict);
    }
};
