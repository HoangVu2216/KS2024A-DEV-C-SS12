#include <stdio.h>

int tim_so_lon_nhat(int mang[], int kich_thuoc) {
    int lon_nhat = mang[0];
    for (int i = 1; i < kich_thuoc; i++) {
        if (mang[i] > lon_nhat) {
            lon_nhat = mang[i];
        }
    }
    return lon_nhat;
}

int main() {
    int mang[] = {12, 45, 67, 23, 89, 34};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    int lon_nhat = tim_so_lon_nhat(mang, kich_thuoc);
    printf("So lon nhat trong mang la: %d\n", lon_nhat);

    return 0;
}

