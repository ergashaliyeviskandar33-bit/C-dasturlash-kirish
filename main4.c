#include <stdio.h>

int main() {
    int narx, cheg, d;
    
      printf("Mahsulot narhi: ");
    scanf("%d", &narx);
    printf("Chegirma foizini kiriting: ");
        scanf("%d", &cheg);

    int s = narx * cheg / 100;
    
    printf("Chegirma summasi: %d\n", s);

    d = narx - s;
    printf("%d foiz chegirmani hissoblaganda %d to'lanadi", s, d);
    return 0;
}