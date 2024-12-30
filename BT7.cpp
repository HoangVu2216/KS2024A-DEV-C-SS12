#include <stdio.h>

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

int main() {
    int soHang, soCot;
    int maTran[100][100];

    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    taoMaTran(soHang, soCot, maTran);

    inMaTran(soHang, soCot, maTran);

    return 0;
}

