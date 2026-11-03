#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Uch honali son kiriting: ");
    scanf("%d", &a);
    b = a / 100;
    c = a % 100;
    d = c / 10;
    e = c % 10;
    

    printf("Teskari tartib: %d%d%d", e, d, b);
    
    return 0;
}