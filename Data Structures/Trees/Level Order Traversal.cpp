    void printlevel(Node *root, int level)
    {
        if(root == nullptr)
            return;
        else if (level == 1)
            cout << root->data << ' ';
        else
        {
            printlevel(root->left, level - 1);
            printlevel(root->right, level - 1);
        }
    }

    void levelOrder(Node * root) 
    {
        int h = height(root);
        for(int i = 1; i <= h; i++)
        {
            printlevel(root, i);
        }
    }
