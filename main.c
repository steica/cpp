#include <stdio.h>

int UCP(int n) {
    if (n % 10 == 0)
        return 0;
    while (n) {
        if (n % 2 == 0)
            return n % 10;
        else
            n /= 10;
    }
    return -1;
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", UCP(x));
}