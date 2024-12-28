#include <stdio.h>

int reverseNumber(int n) {
    int reverse = 0;
    int sign = 1;

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse * sign;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Reversed: %d\n", reverseNumber(n));
    return 0;
}


