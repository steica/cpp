#include <stdio.h>

struct interval {
    int st, dr;
};

int isIntersect(struct interval a, struct interval b) {
    if (a.st >= b.st && a.st <= b.dr)
        return 1;
    if (a.dr >= b.st && a.dr <= b.dr)
        return 1;
    if (b.st >= a.st && b.st <= a.dr)
        return 1;
    if (b.dr >= a.st && b.dr <= a.dr)
        return 1;
    return 0;
}

int main(void) {
    FILE *input = fopen("intervale4.in", "r");
    int n;
    fscanf(input, "%d", &n);
    struct interval stack[100001] = {0};
    int h = 0;
    for (int i = 0; i < n; i++) {
        fscanf(input, "%d %d", &stack[h].st, &stack[h].dr);
        while (h > 0 && isIntersect(stack[h - 1], stack[h])) {
            if (stack[h - 1].st > stack[h].st)
                stack[h - 1].st = stack[h].st;
            if (stack[h - 1].dr < stack[h].dr)
                stack[h - 1].dr = stack[h].dr;
            h--;
        }
        h++;
    }
    fclose(input);
    FILE *output = fopen("intervale4.out", "w");
    fprintf(output, "%d", h);
    fclose(output);
}


