#include <stdio.h>

int main() {
    
    int mang[] = {1, 2, 3, 4, 5};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang tu cuoi ve dau la:\n");
    for (int i = kich_thuoc - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }

    return 0;
}

