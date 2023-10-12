#include <stdio.h>
#include <math.h>

int nz(int n){
    int cnt5 = 0, cnt2 = 0;
    int put2 = 2, put5 = 5;
    while(put2 < n){
        cnt2 += n / put2;
        put2 *= 2;
    }
    while(put5 < n){
        cnt5 += n / put5;
        put5 *= 5;
    }
    return cnt5;
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", nz(x));
};
