#include <stdio.h>
int main() {
    int kichthuoc;
    printf("Nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &kichthuoc);
    int matran[kichthuoc][kichthuoc];
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", kichthuoc, kichthuoc);
    for (int i = 0; i < kichthuoc; i++) {
        for (int j = 0; j < kichthuoc; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
    printf("Ma tran vuong vua nhap:\n");
    for (int i = 0; i < kichthuoc; i++) {
        for (int j = 0; j < kichthuoc; j++) {
            printf("%d\t", matran[i][j]);
        }
        printf("\n");
    }
}