#include <stdio.h>

int main() {
    
    int a, b;
    
    printf("Sonni kiriting: ");
    scanf("%d", &a);
    
    b = a;
    printf("Boslang'ich qiymat: %d\n", b);
    
    ++a;
    ++a;
    ++a;
    printf("3 martta oshirilgandan keyin: %d\n", a);
    
    a = b;
    --a;
    --a;
    printf("Ikki martta kamaytirilganda: %d\n", a);


    return 0;
}