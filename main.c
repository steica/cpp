#include <stdio.h>
#include <string.h>

int main(void) {
    int n, latura[1001];
    scanf("%d", &n);
    int stiva[1000];
    int height_stiva = 0;
    for (int i = 1; i <= n; i++){
        scanf("%d", &latura[i]);
        while (height_stiva > 0 && latura[i] > latura[stiva[height_stiva - 1]])
            height_stiva--;
        stiva[height_stiva++] = i;
    }
    printf("%d\n", height_stiva);
    for (int i = 0; i < height_stiva; i++)
        printf("%d ", stiva[i]);
}

/*int isEmpty() {
    return height_stiva == 0;
}

void pop() {
    if(!isEmpty())
        height_stiva--;
}

void push(int x) {
    stiva[height_stiva++] = x;
}

int top() {
    if (!isEmpty())
        return stiva[height_stiva - 1];
}
 */