#include <stdio.h>

int main() {
    int member;
    float pembelian, diskon, totalBayar;

    printf("Status member (1 = member, 0 = bukan member): ");
    scanf("%d", &member);

    printf("Masukkan total pembelian: Rp ");
    scanf("%f", &pembelian);

    // Cek status member
    if (member == 1) {

        // Jika member
        if (pembelian >= 100000) {
            diskon = pembelian * 0.20;
            printf("Diskon: 20%%\n");
        }
        else {
            diskon = pembelian * 0.10;
            printf("Diskon: 10%%\n");
        }

    }
    else {

        // Jika bukan member
        if (pembelian >= 100000) {
            diskon = pembelian * 0.05;
            printf("Diskon: 5%%\n");
        }
        else {
            diskon = 0;
            printf("Diskon: 0%%\n");
        }
    }

    totalBayar = pembelian - diskon;

    printf("Jumlah diskon: Rp %.2f\n", diskon);
    printf("Total yang harus dibayar: Rp %.2f\n", totalBayar);

    return 0;
}