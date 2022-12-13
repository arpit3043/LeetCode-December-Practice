// URL: https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
    public static void inorderTraversal_helper(TreeNode root, List<Integer>ans) {
        if(root != null) {
            inorderTraversal_helper(root.left, ans);
            ans.add(root.val);
            inorderTraversal_helper(root.right, ans);
        }
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer>ans = new ArrayList<Integer>();
        inorderTraversal_helper(root, ans);
        return ans;
    }
}