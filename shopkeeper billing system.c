#include <stdio.h>

int main() {
    float shop[5][2];
    float totals[5];
    float grand = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 2; j++) {
            if(j == 0) {
                printf("Enter qty for product %d: ", i + 1);
                scanf("%f", &shop[i][j]);
            } else {
                printf("Enter price for product %d: ", i + 1);
                scanf("%f", &shop[i][j]);
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        totals[i] = shop[i][0] * shop[i][1];
        grand += totals[i];
    }

    printf("\nProd\tQty\tPrice\tTotal\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t%.0f\t%.2f\t%.2f\n", i + 1, shop[i][0], shop[i][1], totals[i]);
    }
    printf("Grand Total: %.2f\n", grand);

    return 0;
}
