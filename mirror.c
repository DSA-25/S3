#include<stdio.h>
#include<malloc.h>

struct node {

    int data;
    struct node *left,*right;
};

struct node *create(struct node *root)
{
    struct node *p=NULL,*temp=NULL;
    int i,n;
    printf("\nHow many values");
    scanf("%d",&n);
    printf("\nEnter actual values");
    for ( i = 0; i < n; i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->left=p->right=NULL;

        if (root==NULL)
        {
            root=p;
        }
        else
        {
            temp=root;
        }
        while (temp!=NULL)
        {
            if(p->data<temp->data)
            {
                if (temp->left==NULL)
                {
                    temp->left=p;
                    break;
                }
                else
                temp=temp->left;
            }
            else if (p->data > temp->data)
            {
                if (temp->right==NULL)
                {
                    temp->right=p;
                    break;
                }
                else
                temp=temp->right;                
            }   
        }
    }return root; 
} 

void mirror(struct node *root)
{
    struct node *p=NULL;
    if(root==NULL)
    return ;
    p=root->left;
    root->left=root->right;
    root->right=p;
    mirror(root->left);
    mirror(root->right);
}

void inorder(struct node *root)
{
    struct node *ptr=NULL;
    ptr=root;
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d\t",ptr->data);
        inorder(ptr->right);
    }
}

void main()
{   
    struct node *root=NULL;

    struct node * create();
    struct node * insert();
    void inorder();

    printf("\nCreate Binary Search Tree\n");
    root=create(root);
    printf("\nThe BST is:\n");
    inorder(root);
    printf("\nThe Mirror image is:\n");
    mirror(root);
    inorder(root);
}