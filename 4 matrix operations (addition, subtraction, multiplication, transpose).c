#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3];
    int add[3][3], sub[3][3], mul[3][3], trans[3][3];

    printf("Enter elements of Matrix 1 (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2 (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            add[i][j] = mat1[i][j] + mat2[i][j];
            sub[i][j] = mat1[i][j] - mat2[i][j];
            trans[i][j] = mat1[j][i];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\n1. Matrix Addition:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    printf("\n2. Matrix Subtraction:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    printf("\n3. Matrix Multiplication:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    printf("\n4. Transpose of Matrix 1:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
