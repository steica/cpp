#include <stdio.h>
#include <string.h>

int stiva[1000] = {};
int height_stiva = 0;

int isEmpty() {
    return height_stiva == 0;
}

void pop() {
    if (!isEmpty())
        height_stiva--;
}

void push(int x) {
    stiva[height_stiva++] = x;
}

int top() {
    if (!isEmpty())
        return stiva[height_stiva - 1];
}

int main(void) {
    int n;
    scanf("%d", &n);
    int elem;
    char str[5];
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        if (strcmp(str, "push") == 0) {
            scanf("%d", &elem);
            push(elem);
        } else if (strcmp(str, "pop") == 0) {
            pop();
        } else
            printf("%d\n", top());
    }
    return 0;
}
