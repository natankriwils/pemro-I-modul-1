#include <stdio.h>

int main(){
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int keliling = sisi1 + sisi2 + sisi3;
    int harga_per_meter = 85000;
    int biaya = keliling * harga_per_meter;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per meter adalah %d\n", harga_per_meter);
    printf("Jawabnya :\n");
    printf("Biaya yang harus diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
    return 0;
}