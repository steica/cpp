#include <stdio.h>

long long cmmnr(int n) {
    int frecv[10] = {};
    while (n) {
        frecv[n % 10]++;
        n /= 10;
    }
    int rezultat = 0;
    for (int i = 9; i >= 0; i--) {
        for (int j = 1; j <= frecv[i]; j++)
            rezultat = 10 * rezultat + i;
    }
    return rezultat;
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%lld", cmmnr(x));
}