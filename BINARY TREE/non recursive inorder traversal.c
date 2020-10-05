
struct stack
{
    int top *data;
};

void inorder(struct tree *temp, struct stack *top)
{

    if (temp == NULL)
    {
        printf("Empty tree");
        exit(1);
    }
    while (temp != NULL || *top != NULL)
    {
        if (temp != NULL)
        {
            push(temp, top);
            temp = temp->left;
        }
        else{
            temp=(*top)->link;
            pop(top);
            printf("%d ",temp->data);
            temp=temp->right;
        }
    }
}
