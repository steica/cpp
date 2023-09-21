#include <stdio.h>

int isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main(void) {
    char nume[21], prenume[21];
    scanf("%20s %20s", nume, prenume);
    char c[41];
    int ind_c = 0;
    for (int i = 0; prenume[i]; i++) {
        if (!isVowel(prenume[i]))
            c[ind_c++] = prenume[i];

    }
    c[ind_c++] = ' ';
    for (int i = 0; nume[i]; i++)
        c[ind_c++] = nume[i];
    c[ind_c] = '\0';
    printf("%s", c);
}

