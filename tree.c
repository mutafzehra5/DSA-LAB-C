#include <stdio.h>
#include <stdlib.h>

// Tree Node
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

// Function Declarations
Node *createNode(int data);
void inOrder(Node *temp);
void postOrder(Node *temp);
void preOrder(Node *temp);
int height(Node *temp);
int getSize(Node *root);
int findMax(Node *temp);
 
int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
 
    printf("In order: \n");
    inOrder(root);
 
    printf("\nPost order: \n");
    postOrder(root);
 
    printf("\nPre order: \n");
    preOrder(root);
 
    if (height(root) != -1)
    {
        printf("\nHeight of tree is: %d \n", height(root));
    }
 
    if (getSize(root) != 0)
    {
        printf("Size of tree is: %d \n", getSize(root));
    }
 
    if (findMax(root) != -1)
    {
        printf("Maximum element is %d \n", findMax(root));
    }
    return 0;
}
 
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
 
    return newNode;
}
 
void inOrder(Node *temp)
{
    if (temp == NULL)
        return;
 
    inOrder(temp->left);
    printf("%d ", temp->data);
    inOrder(temp->right);
}
 
void postOrder(Node *temp)
{
    if (temp == NULL)
        return;
 
    postOrder(temp->left);
    postOrder(temp->right);
    printf("%d ", temp->data);
}
 
void preOrder(Node *temp)
{
    if (temp == NULL)
        return;
 
    printf("%d ", temp->data);
 
    preOrder(temp->left);
    preOrder(temp->right);
}
 
int height(Node *temp)
{
    if (temp == NULL)
        return -1;
 
    int lHeight = height(temp->left);
    int rHeight = height(temp->right);
 
    return (lHeight > rHeight ? lHeight : rHeight) + 1;
}
 
int getSize(Node *root)
{
    if (root == NULL)
        return 0;
 
    int left = getSize(root->left);
    int right = getSize(root->right);
 
    return left + right + 1;
}
 
int findMax(Node *temp)
{
    if (temp == NULL)
        return -1;
 
    int res = temp->data;
    int lMax = findMax(temp->left);
    int rMax = findMax(temp->right);
 
    if (lMax > res)
        res = lMax;
    if (rMax > res)
        res = rMax;
 
    return res;
}
