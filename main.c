#include <stdio.h>

int isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main(void) {
    char a[31], b[31];
    scanf("%s %s", a, b);
    char sablon[31];
    int ind = 0;
    for (int i = 0; a[i]; i++) {
        if (isVowel(a[i]) && isVowel(b[i]))
            sablon[ind++] = '*';
        else if (!isVowel(a[i]) && !isVowel(b[i]))
            sablon[ind++] = '#';
        else
            sablon[ind++] = '?';
    }
    sablon[ind] = '\0';
    printf("%s", sablon);
}

