#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a << 1;

    printf("Result of multiplication by 2: %d", b);

    return 0;
}
