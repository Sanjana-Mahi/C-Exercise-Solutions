#include <stdio.h>

float division(int a, int b) {
    return (float)a / b;
}

int main() {
    int a = 10, b = 2;
    printf("Division: %.2f\n", division(a, b));
    return 0;
}
