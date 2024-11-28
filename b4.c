#include <stdio.h>
int main() {
    int mang[2][3] = {
        {3, 5, 7},
        {10, 15, 2},
    };
    int lonnhat = mang[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (mang[i][j] > lonnhat) {
                lonnhat = mang[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", lonnhat);
}