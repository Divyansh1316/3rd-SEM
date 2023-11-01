#include <stdio.h>
#include <stdlib.h>
typedef struct snodetype
{
    struct snodetype *left;
    int data;
    struct snodetype *right;
} bt;

bt *first_node(int x)
{
    bt *temp;
    temp = (bt *)malloc(sizeof(bt));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

bt *search(bt *root, int x)
{
    if (x == root->data)
    {
        return root;
    }
    else if (x > root->data)
    {
        return search(root->right, x);
    }
    else if (x < root->data)
    {
        return search(root->left, x);
    }
}

bt *insert(bt *root, int x)
{
    if (root == NULL)
    {
        first_node(x);
    }
    else if (x > root->data)
    {
        root->right = insert(root->right, x);
    }
    else if (x < root->data)
    {
        root->left = insert(root->left, x);
    }
    else if (x == root->data)
    {
        root->left = insert(root->left, x);
    }
}

bt *find_min(bt *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left != NULL)
    {
        return find_min(root->left);
    }
    return root;
}

bt *delete(bt *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (x > root->data)
    {
        root->right = delete (root->right, x);
    }
    else if (x < root->data)
    {
        root->left = delete (root->left, x);
    }
    else
    {

        if (root->left == NULL && root->right == NULL) // node with no child
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL || root->right == NULL) // node with 1 child
        {
            bt *p1;
            p1 = root;
            if (root->left == NULL)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
            free(p1);
            return root;
        }
        else // node with 2 child
        {
            bt *temp = find_min(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
    return root;
}

void traverse(bt *root)
{
    if (root != NULL)
    {
        traverse(root->left);
        printf("%d ", root->data);
        traverse(root->right);
    }
}

int main()
{
    bt *root;
    root = first_node(10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 15);
    insert(root, 30);
    traverse(root);
    printf("\n");
    delete (root, 20);
    traverse(root);
    printf("\n");
    insert(root, 40);
    traverse(root);
}
