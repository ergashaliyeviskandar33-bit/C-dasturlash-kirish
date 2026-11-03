#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Ikki honali son kiriting: ");
    scanf("%d", &a);

    b = a / 10;
    c = a % 10;

    d = b * c;
    printf("%d x %d = %d", b, c, d);
    return 0;
}