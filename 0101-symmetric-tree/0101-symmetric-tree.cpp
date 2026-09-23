class Solution {
public:
    bool check(TreeNode* l, TreeNode* r) {

        // Both nodes are NULL
        if (l == NULL && r == NULL) {
            return true;
        }

        // Only one node is NULL
        if (l == NULL || r == NULL) {
            return false;
        }

        // Values are different
        if (l->val != r->val) {
            return false;
        }

        // Check mirror positions
        return check(l->left, r->right) &&
               check(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {

        if (root == NULL) {
            return true;
        }

        return check(root->left, root->right);
    }
};