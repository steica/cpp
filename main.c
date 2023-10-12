#include <stdio.h>

int prim(int n) {
    if (n < 2)
        return 0;
    if (n % 2 == 0 && n > 2)
        return 0;
    else {
        for (int d = 3; d * d <= n; d += 2) {
            if (n % d == 0)
                return 0;
        }
    }
    return 1;
}

int i_prim(int n) {
    int p1 = n, p2 = n;
    while (!prim(p1))
        p1--;
    while (!prim(p2))
        p2++;
    return p2 - p1;
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", i_prim(x));
}