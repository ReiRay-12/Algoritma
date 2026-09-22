#include <stdio.h>

int main() {
    float distance;
    printf("==========Pengukur Rekomendasi Kendaraan==========\n");
    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    if (distance < 2.0) {
        printf("Rekomendasi : Jalan Kaki\n");
    } else if (distance < 10.0) {
        printf("Rekomendasi : Mengendarai Sepeda\n");
    } else if (distance < 100.0) {
        printf("Rekomendasi : Mengunakan Bis\n");
    } else {
        printf("Rekomendasi : Pakai Pesawat\n");
    }

    return 0;
}