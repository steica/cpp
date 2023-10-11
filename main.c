#include <stdio.h>

int prim(int n) {
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else {
        for (int d = 3; d * d <= n; d++) {
            if (n % d == 0)
                return 0;
        }
    }
    return 1;
}

int main(void) {
    long long x;
    scanf("%d", &x);
    printf("%d", prim(x));
}