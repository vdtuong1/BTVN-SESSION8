#include <stdio.h>

int main() {
    int ma_tran[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int kich_thuoc = 4; 
    int tong = 0;


    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", ma_tran[i][i]);
        tong += ma_tran[i][i];
    }

    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", tong);

    return 0;
}

