#include <stdio.h>
#include <string.h>

int main(void) {
    char a[251], b[251];
    scanf("%s\n%s", a, b);
    for (int i = 0; a[i]; i++) {
        for (int j = 0; b[j]; j++) {
            if (a[i] == b[j]) {
                printf("%c", a[i]);
                break;
            }
        }
    }
}