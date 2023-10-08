#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *input, *output;
    input = fopen("ifelse.in", "r");
    output = fopen("ifelse.out", "w");
    int n;
    char line[50002];
    fscanf(input, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        int nr = 0, cnt = 0, nr_cuv = 0;
        fgets(line, sizeof(line), input);
        char *word = strtok(line, " \n");
        while (word) {
            if (strcmp(word, "if") == 0)
                nr++;
            else {
                nr--;
                if (nr == - 1) {
                    nr = 1;
                    cnt++;
                }

            }
            nr_cuv++;
            word = strtok(NULL, " \n");
        }
        if (nr_cuv % 2 == 1)
            fprintf(output, "-1\n");
        else
            fprintf(output, "%d\n", cnt + nr / 2);
    }
    fclose(input);
    fclose(output);
}