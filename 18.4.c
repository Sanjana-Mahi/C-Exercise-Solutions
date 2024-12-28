#include <stdio.h>

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int a;int b;
    printf("enter the first  integer");
    scanf("%d",&a);
    printf("enter the second  integer");
    scanf("%d",&b);
    printf("Maximum: %d\n", max(a, b));
    return 0;
}
