#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int elem;
    int stiva[1000] = {};
    char str[5];
    int height_stiva = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (strcmp(str, "top") == 0) {
            if (height_stiva > 0)
                printf("%d\n", stiva[height_stiva - 1]);
        } else if (strcmp(str, "pop") == 0) {
            if (height_stiva > 0)
                height_stiva--;
        } else {
            scanf("%d", &elem);
            stiva[height_stiva++] = elem;
        }
    }
}
