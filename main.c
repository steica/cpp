#include <stdio.h>

int main(void) {
    int k;
    scanf("%d", &k);
    char str[1000001];
    scanf("%s", str);
    char stack[1000001] = {0};
    int height = 0;
    for (int i = 0; str[i]; i++) {
        while (height > 0 && k != 0 && stack[height - 1] > str[i]) {
            height--;
            k--;
        }
        stack[height++] = str[i];
    }
    height -= k;
    stack[height] = '\0';
    printf("%s", stack);
}


