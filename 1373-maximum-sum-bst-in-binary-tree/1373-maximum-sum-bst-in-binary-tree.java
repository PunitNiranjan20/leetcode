class Solution {
    int ans = 0;
    class Node {
        boolean bst;
        int min, max, sum;
        Node(boolean bst, int min, int max, int sum) {
            this.bst = bst;
            this.min = min;
            this.max = max;
            this.sum = sum;
        }
    }
    private Node dfs(TreeNode root) {
        if (root == null)
            return new Node(true, Integer.MAX_VALUE, Integer.MIN_VALUE, 0);
        Node left = dfs(root.left);
        Node right = dfs(root.right);
        if (left.bst && right.bst && root.val > left.max && root.val < right.min) {
            int sum = left.sum + right.sum + root.val;
            ans = Math.max(ans, sum);
            return new Node(true, Math.min(root.val, left.min),
                            Math.max(root.val, right.max), sum);
        }
        return new Node(false, Integer.MIN_VALUE, Integer.MAX_VALUE, 0);
    }
    public int maxSumBST(TreeNode root) {
        dfs(root);
        return ans;
    }
}