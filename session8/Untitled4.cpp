#include <stdio.h>

int main() {
    int mang[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int hang = 3; 
    int cot = 4;  
    int max = mang[0][0]; 

  
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

