#include <stdio.h>

unsigned long long tinh_giai_thua(int n) {
    unsigned long long giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else {
        unsigned long long ket_qua = tinh_giai_thua(so);
        printf("Giai thua cua %d la: %llu\n", so, ket_qua);
    }

    return 0;
}

