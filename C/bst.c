#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left_child;
    struct node *right_child;
} sn;

sn *new_node(int x)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    temp->data = x;
    temp->left_child = NULL;
    temp->right_child = NULL;
}

sn *search(sn *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (x > root->data)
    {
        return search(root->right_child, x);
    }
    else
    {
        return search(root->left_child, x);
    }
}

sn *insert(sn *root, int x)
{
    if (root == NULL)
    {
        return new_node(x);
    }
    if (x > root->data)
    {
        root->right_child = insert(root->right_child, x);
    }
    else
    {
        root->left_child = insert(root->left_child, x);
    }
    return root;
}

sn *find_min(sn *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else
    {
        if (root->left_child != NULL)
        {
            return find_min(root->left_child);
        }
    }
    return root;
}

sn *delete(sn *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (x > root->data)
    {
        root->right_child = delete (root->right_child, x);
    }
    else if (x < root->data)
    {
        root->left_child = delete (root->left_child, x);
    }
    else
    {
        // 0 child
        if (root->left_child == NULL && root->right_child == NULL)
        {
            free(root);
            return NULL;
        }
        // 1 child
        else if (root->left_child == NULL || root->right_child == NULL)
        {
            sn *temp;
            if (root->left_child == NULL)
            {
                temp = root->right_child;
            }
            else if (root->right_child == NULL)
            {
                temp = root->left_child;
            }
            free(root);
            return temp;
        }
        // 2 child: find inorder successor
        else
        {
            sn *temp = find_min(root->right_child);
            root->data = temp->data;
            root->right_child = delete (root->right_child, temp->data);
        }
        return root;
    }
}

void inorder(sn *root)
{
    if (root != NULL)
    {
        inorder(root->left_child);
        printf("%d", root->data);
        inorder(root->right_child);
    }
}

int main()
{
    sn *root;
    root = new_node(20);
    insert(root, 40);
    insert(root, 50);
    insert(root, 60);
    root = delete (root, 60);
    inorder(root);
    return 0;
}