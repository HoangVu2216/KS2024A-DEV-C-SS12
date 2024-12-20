#include <stdio.h>

int tinh_tong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    int tong = tinh_tong(so1, so2);
    printf("Tong cua %d va %d la: %d\n", so1, so2, tong);

    return 0;
}

