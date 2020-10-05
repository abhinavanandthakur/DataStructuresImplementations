
void preorder(NODEPTR tree)
{
    if (tree != NULL)
    {
        printf("%d ", tree->root);
        preorder(tree->left);
        preorder(tree->right);
    }
    else
    {
        printf("Tree is NULL")
            exit(1);
    }
}

void postorder(NODEPTR tree)
{
    if (tree != NULL)
    {

        postorder(tree->left);
        postorder(tree->right);
        printf("%d ", tree->root);
    }
    else
    {
        printf("Tree is NULL")
            exit(1);
    }
}

void inorder(NODEPTR tree)
{
    if (tree != NULL)
    {

        inorder(tree->left);
        printf("%d ", tree->root);
        inorder(tree->right);
    }
    else
    {
        printf("Tree is NULL")
            exit(1);
    }
}