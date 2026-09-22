#include <stdio.h>
    int main() {
        char nama [20];
        float harga, jumlah, total_harga;
        // Input
        printf("Masukkan Nama Barang: ");
        scanf("%s", &nama);

        printf("Masukkan Harga Barang: ");
        scanf("%f", &harga);

        printf("Masukkan Jumlah Barang: ");
        scanf("%f", &jumlah);

        total_harga = harga * jumlah;

        // Output
        printf("=============================\n");
        printf("Nama Barang : %s\n", nama);
        printf("Harga Barang: %.2f\n", harga);
        printf("Jumlah Barang: %.2f\n", jumlah);
        printf("Total Harga Barang: %.2f\n", total_harga);
        printf("=============================\n");
    return 0;
    }
