#include <stdio.h>
#include <math.h>

int main(){
    int u;
    printf("Kubning bir tomon uzunligini kiriting: ");
    scanf("%d", &u);

    printf("Uning hajmi: %d\n", u * u * u);
    printf("Sirt yuzasi: %d", 6 * u * u);
    
    return 0;
}