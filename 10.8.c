#include <stdio.h>

int main() {
    int a[5], i, min;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 1; i < 5; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Minimum Value: %d\n", min);

    return 0;
}

