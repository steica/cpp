#include <stdio.h>
#include <string.h>

int main(void) {
    char str[102];
    fgets(str, sizeof(str), stdin);
    int n;
    scanf("%d", &n);
    int ind = 0;
    int gasit = 0, i = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            if (i - ind == n) {
                gasit = 1;
                for (int j = ind; j < i; j++)
                    printf("%c", str[j]);
                printf("\n");
            }
            ind = i + 1;
        }
    }
    if (!gasit)
        printf("nu exista");
}


//str[i] = '\0';
//printf("%s", str + ind)