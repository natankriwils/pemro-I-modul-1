#include <stdio.h>

int main(){
    int a = 400000;
    int b = 350000;
    printf("Harga sepatu a adalah %d\n", a);
    printf("Harga sepatu b adalah %d\n", b);
    printf("harga sepatu a mendapat diskon 13 persen sehingga harganya menjadi %d\n", a * 87 / 100);
    printf("harga sepatu b mendapat diskon 21 persen sehingga harganya menjadi %d\n", b * 79 / 100);
    return 0;
}