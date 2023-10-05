#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *input, *output;
    input = fopen("paranteze3.in", "r");
    output = fopen("paranteze3.out", "w");
    int n;
    fscanf(input, "%d", &n);
    char str[256];
    char stiva[256];
    for (int i = 1; i <= n; i++) {
        fscanf(input, "%s", str);
        int height_stiva = 0;
        for (int j = 0; str[j]; j++) {
            if (height_stiva == 0)
                stiva[height_stiva++] = str[j];
            else {
                if (stiva[height_stiva - 1] == '(' && str[j] == ')' || stiva[height_stiva - 1] == '[' && str[j] == ']')
                    height_stiva--;
                else
                    stiva[height_stiva++] = str[j];
            }
        }
        if (height_stiva == 0)
            fprintf(output, "1\n");
        else
            fprintf(output, "0\n");

    }
    fclose(input);
    fclose(output);
}





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