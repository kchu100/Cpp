//Get the height of a binary tree
    int height(Node *root)
    {
        if(root == nullptr)
            return -1;
        else
        {
            int l = height(root->left);
            int r = height(root->right);

            if(l > r)
                return l + 1;
            else
                return r + 1;
        }
    }
