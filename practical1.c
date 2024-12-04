// Practical 1: Program to implement lexicla analyzer in c.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        printf("It is a letter.\n");
    }
    else if (isdigit(ch))
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("It is a special character.\n");
    }
    return 0;
}