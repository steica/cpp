#include <stdio.h>

long long sumcif(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + sumcif(n / 10);
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%lld", sumcif(x));
}