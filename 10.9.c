#include <stdio.h>

int main() {
    int a[6], n, i, pos;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &n);
    printf("Enter the position (1-6): ");
    scanf("%d", &pos);

    for (i = 5; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = n;

    printf("Updated Array:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
