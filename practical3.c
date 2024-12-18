// practical3.c

// Note: This code will only work on Windows systems. Because of the use of the getch() function and conio.h library, it may not work on other systems.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define VALID_USERNAME "mahatiatre"
#define VALID_PASSWORD "Jay@2210"

int main()
{
    char username[100], password[100];
    int i = 0;
    char ch;

    printf("Enter username: ");
    scanf("%99s", username);

    printf("Enter password: ");
    while (1)
    {
        ch = getch();
        if (ch == '\r')
        {
            break;
        }
        else if (ch == '\b')
        {
            if (i > 0)
            {
                printf("\b \b");
                i--;
            }
        }
        else if (i < 99)
        {
            password[i++] = ch;
            printf("*");
        }
    }
    password[i] = '\0';

    if (strcmp(username, VALID_USERNAME) == 0 && strcmp(password, VALID_PASSWORD) == 0)
    {
        printf("\nLogin successful. Welcome to the Page!\n");
    }
    else
    {
        printf("\nInvalid username or password. Please try again.\n");
    }

    return 0;
}
