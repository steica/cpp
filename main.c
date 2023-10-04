#include <stdio.h>
#include <string.h>


int stack[100], dim = 0;

void push(int x) {
    stack[dim++] = x;
}

void pop() {
    dim--;
    printf("%d ", stack[dim]);
}

int main() {
    char str[256];
    scanf("%s", str);
    int ctr = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') {
            ctr++;
            push(ctr);
        } else {
            pop(dim);
        }
    }
}


/*#include <stdio.h>
#include <string.h>

int main(void) {
    char str[255];
    char stiva[255];
    int rezultate[255], ind = 0;
    scanf("%s", str);
    int height_stiva = 0;
    for (int j = 1; str[j]; j++) {
        if (height_stiva == 0)
            stiva[height_stiva++] = str[j];
        else {
            if (stiva[height_stiva - 1] == '(' && str[j] == ')') {
                height_stiva--;
                rezultate[ind++] =;
            } else {
                stiva[height_stiva++] = str[j];
            }
        }
    }
    for (int i = 0; i < ind; i++)
        printf("%d ", rezultate[i]);
}*/



/*
int isEmpty() {
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