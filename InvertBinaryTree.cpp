TreeNode* invertTree(TreeNode* root)
{
	if (root == nullptr)
	{
		return root;
	}
	TreeNode* left = invertTree(root->left);
	TreeNode* right = invertTree(root->right);
	TreeNode* temp = left;
	root->left = right;
	root->right = left;
	return root;
}
