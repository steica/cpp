#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[256];
    cin.getline(str, 256);
    char sep[] = " ,.";
    char matrice[255][11];
    int ind = 0;
    char *pointer = strtok(str, sep);

    while (pointer) {
            strcpy(matrice[++ind], pointer);
            pointer = strtok(NULL, sep);
    }

    for (int i = 1; i < ind; ++i) {
        for (int j = i + 1; j <= ind; ++j) {
            if (strcmp(matrice[i], matrice[j]) > 0) {
                char aux[11];
                strcpy(aux, matrice[i]);
                strcpy(matrice[i], matrice[j]);
                strcpy(matrice[j], aux);
            }
        }
    }
    bool gasit = false;
    for (int i = 1; i <= ind && !gasit; ++i) {
        bool palindrom = true;
        int stg = 0, dr = strlen(matrice[i]) - 1;
        for ( ; stg <= dr; ++stg, --dr) {
            if (matrice[i][stg] != matrice[i][dr])
                palindrom = false;
        }
        if (palindrom) {
            gasit = true;
            cout << matrice[i];
        }
    }
    if(!gasit)
        cout << "IMPOSIBIL";
}