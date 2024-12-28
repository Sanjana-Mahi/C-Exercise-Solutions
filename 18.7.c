#include <stdio.h>

float circleArea(float radius) {
    return 3.1416 * radius * radius;
}

int main() {
    float radius;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Area: %.2f\n", circleArea(radius));
    return 0;
}

