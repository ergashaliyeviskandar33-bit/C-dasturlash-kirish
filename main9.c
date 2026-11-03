#include <stdio.h>

int main() {
    
    int a, b, c;

    printf("Bosib o'tilgan masofani kiriting: ");
    scanf("%d", &a);

    printf("Sarflangan yoqilg'ini kiriting: ");
    scanf("%d", &b);

    c = (b * 100) / a;
    printf("100 km uchun sarflangan yoqilg'i: %d", c);
    
    return 0;
}