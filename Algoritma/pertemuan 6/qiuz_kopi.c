#include <stdio.h>
//Nilai Sendiri : 100
//Nilai teman : 100
int main() {
    int price;
    int total;
    int rental_duration;
    int bayar;
    int uang_kurang;
    int kembalian;

    printf("--- KASIR FOTOCOPY --- \n");
    printf("Masukan Jumlah Lembar: ");
    scanf("%d", &rental_duration);

    if (rental_duration < 100){
        price = 150;
    } else {
        price = 100;
    }

    printf("Harga Perlembar : Rp. %d \n", price );
    total = price * rental_duration;
    printf("Total Biaya : Rp. %d \n", total);



    printf("Masukan uang yang dibayarkan : Rp. ");
    scanf("%d", &bayar);

    printf("\n----------------------\n");

    printf("Jumlah Lembar : %d \n", rental_duration);
    printf("Total Biaya : Rp. %d \n", total);
    printf("Uang yang Dibayarkan : Rp. %d \n", bayar);

    if (bayar < total){
        uang_kurang = total - bayar;
        printf("Error! Uang Tidak Mencukup! Anda kurang Rp. %d", uang_kurang);
    } else {
        kembalian = bayar - total;
        printf("Uang Kembalian Rp. %d \n", kembalian);
        printf("Terima Kasih Sudah Membeli KopiKopi");
    }

    return 0;
}
