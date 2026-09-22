#include <stdio.h>
    int main() {
        int panjang, lebar, luas;
        // Input
        printf("Masukkan Panjang: ");
        scanf("%d", &panjang);

        printf("Masukkan Lebar: ");
        scanf("%d", &lebar);

        luas = panjang * lebar;

        // Output
        printf("luas persegi panjang: %d\n", luas);
    return 0;
    }
