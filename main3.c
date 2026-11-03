#include <stdio.h>

int main() {
    int c;
    
      printf("Selsiy bo'yicha gradusni kiriting: ");
    scanf("%d", &c);
    
    printf("%d gradus teng bo'ladi %d Frengeytga\n", c, c * 9 / 5 + 32);
    
    return 0;
}