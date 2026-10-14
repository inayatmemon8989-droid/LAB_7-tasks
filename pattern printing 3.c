#include <stdio.h>

int main() {
    int p[5][5] = {0};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - i; j++) {
            p[i][j] = j + 1;
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - i; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}


