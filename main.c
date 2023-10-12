#include <stdio.h>

int prim(int n) {
    if (n < 2)
        return 0;
    if (n > 2 && n & 2 == 0)
        return 0;
    for (int d = 3; d * d <= n; d += 2)
        if (n % d == 0)
            return 0;
    return 1;
}

int a_prim(int n) {
    int cnt_diviz = 0;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0)
            cnt_diviz += 2;
        if (d * d == n)
            cnt_diviz--;
    }
    if (cnt_diviz == 2) {
        int div1, div2;
        for (int d = 2; d * d <= n; d++)
            if (n % d == 0) {
                div1 = d;
                div2 = n / d;
            }
        if (prim(div1) && prim(div2))
            return 1;
    }
    return 0;
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", prim(x));
};
