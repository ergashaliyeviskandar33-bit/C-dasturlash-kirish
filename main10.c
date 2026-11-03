#include <stdio.h>

int main() {
    
    int a, b, c, d;

    printf("Oylik daromadi: ");
    scanf("%d", &a);

    printf("Oylik sarfi: ");
    scanf("%d", &b);

    c = a - b;
    d = c * 12;
    printf("Oyoga %d miqdorida pul tejaladi: %d\n", c);
    printf("12 oyda %d yig'iladi", d);
    
    return 0;
}