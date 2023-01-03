#include <stdio.h>
void main()
{
    float n1, n2, n3, n4, average, add, choice;
    printf("enter the number");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    printf("1.add\n2.average\n");
    scanf("%f", &choice);
    if (choice == 1)
    {
        printf("add:%f", n1 + n2 + n3 + n4);
    }
    else if (choice == 2)
    {
        printf("average: %f\n", (n1 + n2 + n3 + n4) / 4);
    }
    else
    {
        printf("input invalid");
    }
}