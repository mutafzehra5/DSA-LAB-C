#include <stdio.h>
#include <string.h>

void traversal(char str[]);
int strLength(char str[]);
int isPalindrome(char str[]);
void str_reverse(char str[]);

int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    traversal(str);
    printf("The length of the string is %d", strLength(str));
    if (isPalindrome(str))
    {
        printf("The string is Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }

    str_reverse(str);
}

void traversal(char str[])
{

    char *p;

    p = &str[0];
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
}

int strLength(char str[])
{

    char *p;

    p = &str[0];

    int length = 0;
    while (*p != '\0')
    {
        length++;
        p++;
    }

    return length;
}

int isPalindrome(char str[])
{

    char *p, *q;

    int length = strlen(str) - 1;

    p = &str[0];
    q = &str[0];

    while (*q != '\0')
    {
        q++;
    }
    q--;

    while (p <= q)
    {
        if (*p == *q)
            return 1;
        else
            return 0;

        p++;
        q--;
    }
}

void str_reverse(char str[])
{
    char *p = &str[0];
    char *q = &str[0];

    while (*q != '\0')
    {
        q++;
    }
    q--;

    while (*q != *p)
    {
        printf("%c", *q);
        q--;
    }
    printf("%c", *q);
    printf("\n");
}
