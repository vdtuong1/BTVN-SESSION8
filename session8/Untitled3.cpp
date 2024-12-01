#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen (kich thuoc cua ma tran vuong): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc phai la mot so nguyen duong.\n");
        return 1;
    }

    int mang[n][n];

    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("\nMa tran vuong da nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

