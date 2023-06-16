//level 1 question 1
/*1. Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops*/
#include <stdio.h>

void printDecreasing(int n);
void printSpaces(int n);
void printIncreasing(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--)
    {
        printIncreasing(i);
        printSpaces((n - i) * 2);
        printDecreasing(i);
        printf("\n");
    }
    
    return 0;
}

void printDecreasing(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}

void printSpaces(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
}

void printIncreasing(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}