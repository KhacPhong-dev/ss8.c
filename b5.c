#include <stdio.h>

int main() {
    int hang = 3, cot = 3;
    int mang[3][3] = {
        {1,  3, 4},
        {5, 7, 8},
        {9, 10, 12},
    };
    int tong = 0;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                tong += mang[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

}