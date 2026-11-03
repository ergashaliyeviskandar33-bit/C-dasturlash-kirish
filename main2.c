#include <stdio.h>

int main() {
    float km;
    
      printf("Kilometrni kiriting: ");
    scanf("%f", &km);
    
    printf("%.1f kilometr teng bo'ladi %.0f metrga\n", km, km * 1000);
    printf("%.1f kilometr teng bo'ladi %.0f santimetrga", km, km * 100000);
    
    return 0;
}