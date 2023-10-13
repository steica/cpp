#include <stdio.h>

int main(void) {
    int A[1000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    int B[1001] = {0};
    int h_B = 0, h_C = 1;
    int op[3000], ind = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == h_C) {
            h_C++;
            op[ind++] = 1;
            while (h_B > 0 && B[h_B - 1] == h_C) {
                h_C++;
                op[ind++] = 3;
                h_B--;
            }
        } else {
            B[h_B++] = A[i];
            op[ind++] = 2;
        }
    }
    if (h_C != n + 1) {
        printf("0\n");
        return 0;
    }
    printf("%d\n", ind);
    for (int i = 0; i < ind; i++) {
        if (op[i] == 1)
            printf("A C\n");
        else if (op[i] == 2)
            printf("A B\n");
        else
            printf("B C\n");
    }
}


