#include <stdio.h>

int main() {
    int kichthuoc = 3;
    int mang[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int tong = 0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < kichthuoc; i++) {
        printf("%d ", mang[i][i]);
        tong += mang[i][i];
    }
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", tong);
}