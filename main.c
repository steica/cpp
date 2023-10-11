#include <stdio.h>
#include <math.h>

long long concat(long long a, long long b) {
    long long copie_b = b;
    while (copie_b) {
        a *= 10;
        copie_b /= 10;
    }
    return a + b;
}

int main(void) {
    long long x, y;
    scanf("%lld%lld", &x, &y);
    printf("%lld", concat(x, y));
}