#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int mediam3(int a, int b, int c) {
    return a + b + c - max3(a, b, c) - min3(a, b, c);
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Mediam: %d\n", mediam3(a, b, c));
    return 0;
}


