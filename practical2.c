// Prectical 2: Program to count digits, vowels, consonants, operators, and symbols in a string

#include <stdio.h>

int main()
{
    char ch;
    int digits = 0, vowels = 0, consonants = 0, symbols = 0, operators = 0;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            consonants++;
        else if (ch == '-' || ch == '+' || ch == '%' || ch == '/' || ch == '*' || ch == '^')
            operators++;
        else
            symbols++;
    }

    printf("Digits: %d\nVowels: %d\nConsonants: %d\nOperators: %d\nSymbols: %d\n", digits, vowels, consonants, operators, symbols);
    return 0;
}