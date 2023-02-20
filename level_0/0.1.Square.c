// get user input and print a sqaure of stars

#include <stdio.h>

int main(void)
{
    int n, i, j;

    n = 0;
    printf("Enter an integer greater than 2: ");
    scanf("%d",&n);

    if (n < 2)
    {
        printf("Entered number is less than 2!");
        return -1;
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("*");
    }
    printf("\n");

    for (i=2; i<n; i++)
    {
        printf("*");
        for (j=2; j<n; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (i=0; i<n; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
