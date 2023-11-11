#include <stdio.h>

void push(int x, int Q[], int *left, int *right) {
    for (int i = *left; i < *right; i++) {
        if (Q[i] == x) {
            *left = i + 1;
            break;
        }
    }
    Q[(*right)++] = x;
}

int query(int x, int Q[], int left, int right) {
    for (int i = left; i < right; i++) {
        if (Q[i] == x) {
            return i - left + 1;
        }
    }
    return -1;
}

int main() {
    int M;
    int queue[100001] = {0};
    int left = 0, right = 0;
    FILE *in = fopen("coada1.in", "r");
    fscanf(in, "%d", &M);
    FILE *out = fopen("coada1.out", "w");
    for (int i = 0; i < M; i++) {
        char operatie[6];
        int x;
        fscanf(in, "%s %d", operatie, &x);
        if(operatie[0] == 'p')
            push(x, queue, &left, &right);
        else
            fprintf(out, "%d\n", query(x, queue, left, right));
    }
    fclose(in);
    fclose(out);
}
