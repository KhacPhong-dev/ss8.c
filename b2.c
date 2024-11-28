#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kt = sizeof(mang) / sizeof(mang[0]);
    int phantu, b = 0;
    printf("Nhập phần tử cần kiểm tra: ");
    scanf("%d", &phantu);
    for (int i = 0; i < kt; i++) {
        if (mang[i] == phantu) {
            printf("Phần tử tồn tại tại vị trí %d trong mang.\n", i);
            b = 1;
            break;
        }
    }
    if (!b) {
        printf("Phần tử không tồn tại trong mang.\n");
    }
}