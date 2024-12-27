#include <stdio.h>

int main()
{
    int i, a[5];
    printf("Enter the  integers:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array Elements:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
        return 0;
}
