#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *input, *output;
    input = fopen("paranteze2.in", "r");
    output = fopen("paranteze2.out", "w");
    char str[255];
    fscanf(input, "%s", str);
    int cnt = 0, max = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') {
            cnt++;
            if (cnt > max)
                max = cnt;
        } else {
            cnt--;
        }
    }
    fprintf(output, "%d", max);
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