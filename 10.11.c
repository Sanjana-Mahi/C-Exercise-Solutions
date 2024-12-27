#include <stdio.h>

int main() {
    int a[5], i, n, found = 0;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &n);

    for (i = 0; i < 5; i++) {
        if (a[i] == n) {
            found = 1;
            printf("Number found at position: %d\n", i + 1);
            break;
        }
    }

    if (!found) {
        printf("Number not found in the array.\n");
    }

    return 0;
}


