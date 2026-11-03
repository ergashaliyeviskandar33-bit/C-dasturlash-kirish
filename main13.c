#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;

    printf("Birinchi sonni kiriting: ");
    scanf("%d", &a);
    printf("Ikkinchi sonni kiriting: ");
    scanf("%d", &b);

    c = pow(a, 2);
    d = pow(b, 3);

    printf("Birinchi sonni kvadrati: %d\nIkkinchi sonni kubi: %d", c, d);
    
    return 0;
}