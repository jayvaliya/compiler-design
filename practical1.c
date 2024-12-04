// Practical 1: Program to implement lexiclal analyzer in c.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 100;

bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return true;
    }
    return false;
}

bool isIdentifier(char c)
{
    if (isalpha(c) || c == '_')
    {
        return true;
    }
    return false;
}

bool isSpecialSymbol(char c)
{
    if (c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']' || c == ',' || c == ';' || c == ':' || c == '.')
    {
        return true;
    }
    return false;
}

bool isConstant(char c)
{
    if (isdigit(c))
    {
        return true;
    }
    return false;
}

bool isKeywords(char c)
{
    char keywords[32][10] = {
        "auto", "double", "int", "struct", "break", "else", "long", "switch", "case", "enum", "register", "typedef", "char", "extern", "return", "union", "const", "float", "short", "unsigned", "continue", "for", "signed", "void", "default", "goto", "sizeof", "volatile", "do", "if", "static", "while"};
    for (int i = 0; i < 32; i++)
    {
        if (strcmp(keywords[i], c) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char c;
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        c = str[i];
        if (isOperator(c))
        {
            printf("%c is an operator\n", c);
        }
        else if (isIdentifier(c))
        {
            printf("%c is an identifier\n", c);
        }
        else if (isSpecialSymbol(c))
        {
            printf("%c is a special symbol\n", c);
        }
        else if (isConstant(c))
        {
            printf("%c is a constant\n", c);
        }
        else if (isKeywords(c))
        {
            printf("%c is a keyword\n", c);
        }
        i++;
    }
    return 0;
}