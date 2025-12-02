#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Function declaration
void traversal(Node *node);
void *createNode(int data);
void *insertAtBeginning(Node *head, int data);
int counNodes(Node *head);
void *insertAtEnd(Node *temp, int data);
void *insertAtanyPos(Node *temp, int data, int pos);
void *deleteFromBeginning(Node *head);
void *deleteFromEnd(Node *temp);
void *deleteFromAnypPos(Node *temp, int position);

int main()
{
  
    Node *head;

   
    Node *nodeOne = createNode(1);
    head = nodeOne;

    Node *nodeTwo = createNode(2);
    Node *nodeThree = createNode(3);

    nodeOne->next = nodeTwo;
    nodeTwo->next = nodeThree;

    traversal(head);
    insertAtBeginning(head, 5);
    printf("Number of nodes are %d \n", counNodes(head));
    insertAtEnd(head, 20);
    insertAtanyPos(head, 33, 2);

    free(nodeOne);
    free(nodeTwo);
    free(nodeThree);

    return 0;
}

void *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Memory allocation failed!");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;
    }

    return newNode;
}

void traversal(Node *node)
{
    while (node)
    {
        printf("Data in Node is: %d \n", node->data);
        node = node->next;
    }
}

void *insertAtBeginning(Node *head, int data)
{
    Node *newNode = createNode(data);

    newNode->next = head;
    head = newNode;

    printf("Insertion of a new node with data %d succesful! \n", data);
}

int counNodes(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

void *insertAtEnd(Node *temp, int data)
{
    Node *newNode = createNode(data);
    while (temp)
    {
        temp = temp->next;
    }
    temp = newNode;

    printf("Node succesfully appended with data :%d \n", data);
}

void *insertAtanyPos(Node *temp, int data, int pos)
{
    Node *newNode = createNode(data);

    for (int i = 2; i < pos; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    printf("New node with data %d inserted at position %d \n", data, pos);
}

void *deleteFromBeginning(Node *head)
{

    head = head->next;

    printf("Deleted sucessfuly! \n");
}

void *deleteFromEnd(Node *temp)
{
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;

    printf("Last node deleted succesfully! \n");
}

void *deleteFromAnypPos(Node *temp, int position)
{
    for (int i = 2; i < position; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    temp->next = temp->next->next;
}
