#include <stdio.h>

int rectangleArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    printf("Enter length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    printf("Area: %d\n", rectangleArea(length, width));
    return 0;
}

