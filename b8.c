#include <stdio.h>
int main() {
    int kichthuoc = 3;
    int mang[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int tong = 0;

    printf("Cac phan tu tren duong cheo phu la:\n");
    for (int i = 0; i < kichthuoc; i++) {
        printf("%d ", mang[i][kichthuoc - i - 1]);
        tong += mang[i][kichthuoc - i - 1];
    }
    printf("Tong cac phan tu tren duong cheo phu la: %d\n", tong);
    return 0;
}