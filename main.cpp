#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[256];
    cin.getline (str, 255);
    char separator[] = " ";
    char *pointer;
    char matrice[100][100]{}, ind = 0;
    pointer = strtok(str, separator);
    while (pointer) {
        strcpy(matrice[++ind], pointer);
        pointer = strtok(NULL, separator);
    }
    bool gasit = false;
    char rez[100]{};
    int max = -1;

    for (int i = 1; i <= ind; i++) {
        if (isdigit(matrice[i][0])) {
            if (matrice[i][0] - 0 > max) {
                max = matrice[i][0] - 0;
                strcpy(rez, matrice[i]);
            }
            gasit = true;
        }
    }
    if (gasit)
        cout << rez;
    else
        cout << "nu exista";
}