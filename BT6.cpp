#include <stdio.h>
#include <stdbool.h>

void taoMaTran(int soHang, int soCot, int maTran[100][100]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int soHang, int soCot, int maTran[100][100]) {
    printf("Ma tran:");
    for (int i = 0; i < soHang; i++) {
        printf("\n");
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
    }
}

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool kiemTraSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool kiemTraSoHoanHao(int n) {
    if (n <= 0) return false;
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong == n;
}

int main() {
    int soHang, soCot;
    int maTran[100][100];

    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    taoMaTran(soHang, soCot, maTran);

    inMaTran(soHang, soCot, maTran);

    int a, b;
    printf("\nNhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    int ucln = timUCLN(a, b);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);

    printf("\nKiem tra so nguyen to:\n");
    printf("%d %s so nguyen to.\n", a, kiemTraSoNguyenTo(a) ? "la" : "khong phai");
    printf("%d %s so nguyen to.\n", b, kiemTraSoNguyenTo(b) ? "la" : "khong phai");

    printf("\nKiem tra so hoan hao:\n");
    printf("%d %s so hoan hao.\n", a, kiemTraSoHoanHao(a) ? "la" : "khong phai");
    printf("%d %s so hoan hao.\n", b, kiemTraSoHoanHao(b) ? "la" : "khong phai");

    return 0;
}

