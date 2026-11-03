#include <stdio.h>

int main() {
    int soat1, daqiqa1;
    int soat2, daqiqa2;

    printf("Boshlanish vaqtini kiriting (soat daqiqa): ");
    scanf("%d %d", &soat1, &daqiqa1);

    printf("Tugash vaqtini kiriting (soat daqiqa): ");
    scanf("%d %d", &soat2, &daqiqa2);

    int boshlanish = soat1 * 60 + daqiqa1;
    int tugash = soat2 * 60 + daqiqa2;

    int farq = tugash - boshlanish;

    printf("Vaqt farqi: %d daqiqa\n", farq);

    return 0;
}