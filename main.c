#include <stdio.h>

int main(void) {
    char a[256];
    gets(a);
    int frecv[26] = {0};
    int max = 0;
    for (int i = 0; a[i]; i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            frecv[a[i] - 'a']++;
    }
    int litera;
    for (int i = 0; i <= 'z' - 'a'; i++) {
        if (max < frecv[i]) {
            max = frecv[i];
            litera = i;
        }
    }
    printf("%c", litera + 'a');
}

