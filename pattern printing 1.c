#include <stdio.h>

int main() {
    int p[5][5] = {0};
    int val[] = {1, 4, 27, 16, 125};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            p[i][j] = val[j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
