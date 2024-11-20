#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int tc, n, m;  // Khai bao bien  
    int A[100][100];  // Ma tran A 

    for (tc = 1; tc <= t; tc++) {
        // kich thuoc ma tran  
        scanf("%d %d", &n, &m);

        // nhap ma tran A  
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Test %d:\n", tc);

        // Tinh và in ma tran tích A × A^T
        int k, sum;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                sum = 0;
                for (k = 0; k < m; k++) {
                    sum += A[i][k] * A[j][k];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }

    return 0;
}
