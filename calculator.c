#include <stdio.h>
void main()
{
    float n1, n2, add, sub, division, mul, choice;

    printf("enter the   number");
    scanf("%f%f", &n1, &n2);
    printf("1.add\n2.sub\n3.mul\n4.division\n");
    scanf("%f", &choice);
    if (choice == 1)
    {
        printf("add:%f\n", n1 + n2);
    }
    else if (choice == 2)
    {
        printf("sub:%f\n", n1 - n2);
    }
    else if (choice == 3)
    {
        printf("mul:%f\n", n1 * n2);
    }
    else if (choice == 4)
    {
        printf("division:%f\n", n1 / n2);
    }
    else
    {
        printf("invalid input");
    }
}