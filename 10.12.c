#include <stdio.h>

int main() {
    int a[5], pos, newValue, i;

    // Taking input for the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Input position and new value
    printf("Enter the position to update (1 to 5): ");
    scanf("%d", &pos);
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Update the value
    a[pos - 1] = newValue;

    // Display updated array
    printf("Updated Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


