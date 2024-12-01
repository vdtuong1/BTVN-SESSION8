#include <stdio.h>

int main() {

    int ma_tran[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int hang = 4; 
    int cot = 4; 
    int tong = 0;

    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
        	
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                tong += ma_tran[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
}

