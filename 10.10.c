#include <stdio.h>

int main() {
    int a[5], i, pos;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of the element to delete (1-5): ");
    scanf("%d", &pos);

    for (i = pos - 1; i < 4; i++) {
        a[i] = a[i + 1];
    }

    printf("Updated Array:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

