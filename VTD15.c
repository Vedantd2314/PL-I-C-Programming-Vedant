/*Program(16)-Write a program to generate the multiplication table of any number while loop,do while loop and for loop.

Solution(3)-Using do while loop*/

#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d\n", num);

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    while (i <= 10);

    return 0;
}