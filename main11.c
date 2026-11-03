#include <stdio.h>

int main() {
    
    int a, b, c, d, e, f, g;

    printf("To'rt honali son kiriting: ");
    scanf("%d", &a);

    b = a / 1000;
    c = a % 1000;
    d = c / 100;
    e = c % 100;
    f = e / 10;
    g = e % 10;
    
    printf("Minglik son: %d\n", b);
    printf("Yuzlik son: %d\n", d);
    printf("O'nlik son: %d\n", f);
    printf("Birlik son: %d", g);
    
    return 0;
}