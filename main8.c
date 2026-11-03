#include <stdio.h>

int main() {
    
    int a, b, c, d, e;

    printf("Kunlarni kiriting: ");
    scanf("%d", &a);
    b = a / 365;
    c = a % 365;
    d = c / 7;
    e = c % 7;
    
    printf("%d yil u %d hafta va %d kun", b, d, e);
    
    return 0;
}