struct node
{
    int value;
    struct node *left, *right;
};

void mirror(struct node *tree)
{
    if (tree == NULL)
    {
        printf("Tree is empty");
        exit(1);
    }
    mirror(tree->left);
    mirror(tree->right);
    struct node *temp;
    temp = tree->left;
    tree->left = tree->right;
    tree->right = temp;
}