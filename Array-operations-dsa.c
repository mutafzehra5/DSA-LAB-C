// Programme representing different Array Operations
#include <stdio.h>

// Function declarations
void arrayTraversal();
void arrayInsertion_beg();
void arrayInsertion_end();
void arrayInsertion_any();
void arrayDeletion_beg();
void arrayDeletion_end();
void arrayDeletion_any();
int linearSearch();

int main()
{
    //  arrayTraversal();
    // arrayInsertion_beg();
    // arrayInsertion_end();
    // arrayInsertion_any();
    // arrayDeletion_beg();
    // arrayDeletion_end();
    // arrayDeletion_any();
    // int result = linearSearch();
    // result == -1 ? printf("Element not found \n") : printf("Element found at %d position \n", result + 1);
}
// Array Traversal!
void arrayTraversal()
{
    int arr[10];
    int length = sizeof(arr) / sizeof(int);
    printf("Enter array entries (10): ");

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Members of array are: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrayInsertion_beg()
{
    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to be inserted: ");
    scanf("%d", &element);

    int newArr[6];
    int newLength = length + 1;
    newArr[0] = element;

    for (int i = 0; i < length; i++)
    {
        newArr[i + 1] = arr[i];
    }

    printf("Members of updated array are: ");

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", newArr[i]);
    }
    printf("\n");
}

void arrayInsertion_end()
{

    int arr[5];
    int newArr[6];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to be inserted: ");
    scanf("%d", &element);

    for (int i = 0; i < length; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[5] = element;

    printf("Updated array is: ");
    for (int i = 0; i < length + 1; i++)
    {
        printf("%d ", newArr[i]);
    }
    printf("\n");
}

void arrayInsertion_any()
{
    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element, position;
    printf("Enter element to be inserted: ");
    scanf("%d", &element);
    printf("Enter position to be inserted at: ");
    scanf("%d", &position);

    int index = position - 1;

    int newArr[6];
    int newLength = length + 1;

    for (int i = 0; i < index; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[index] = element;

    for (int i = index + 1; i <= length; i++)
    {
        newArr[i] = arr[i - 1];
    }

    printf("Updated array is: ");

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", newArr[i]);
    }
    printf("\n");
}

void arrayDeletion_beg()
{

    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }

    printf("Updated array is: ");

    for (int i = 0; i < length - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrayDeletion_end()
{

    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr[4];

    printf("Update array is: ");
    for (int i = 0; i < length - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrayDeletion_any()
{

    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter postion to be deleted at: ");
    scanf("%d", &pos);
    int index = pos - 1;

    for (int i = index; i <= length - 2; i++)
    {
        arr[i] = arr[i + 1];
    }
    length -= 1;

    printf("Updated array is: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch()
{
    int arr[5];
    int length = sizeof(arr) / sizeof(int);

    printf("Enter array entries (5): ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int elem;
    printf("Enter element to be searched: ");
    scanf("%d", &elem);

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == elem)
        {
            return i;
        }
    }
    return -1;
    printf("\n");
}