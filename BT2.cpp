#include <stdio.h>

void in_mang(int mang[], int kich_thuoc) {
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {12, 45, 67, 23, 89, 34};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang la:\n");
    in_mang(mang, kich_thuoc);

    return 0;
}

