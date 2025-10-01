#include <stdio.h>

int main() {
    int pasukan_YZ = 958730;
    int pahlawan = 5;
    int pasukan_YZ_per_pahlawan = pasukan_YZ / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_YZ);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_YZ_per_pahlawan);

    return 0;
}