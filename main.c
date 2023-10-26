#include <stdio.h>

char s[60];          // Se declară un șir de caractere pentru a stoca expresia.
long long v[60], suma; // Se declară un tablou pentru a stoca valorile numerice și variabila suma pentru rezultat final.
int c, x;             // Variabile auxiliare pentru gestionarea valorilor numerice și a numărului de elemente în v[].

int Cifra(char s) {
    return (s >= '0' && s <= '9'); // Funcția care verifică dacă un caracter este cifră.
}

int main() {
    int semn = 1, ori = 0, i = 0; // Inițializarea variabilelor pentru semn, operație și indice.
    scanf("%s", &s); // Se citește expresia de la intrare standard în șirul s.
    while (s[i] != '\0') { // Parcurgere caracter cu caracter în șirul s.
        if (!Cifra(s[i])) { // Dacă caracterul curent nu este o cifră, intrăm în acest bloc.
            if (s[i] == '+')
                semn = 1; // Dacă avem '+' înseamnă că urmează o adunare, așa că semnul este setat la 1 (pozitiv).
            else if (s[i] == '-')
                semn = -1; // Dacă avem '-' înseamnă că urmează o scădere, așa că semnul este setat la -1 (negativ).
            else if (s[i] == '*')
                ori = 1; // Dacă avem '*' înseamnă că urmează o înmulțire, așa că ori este setat la 1.
            else
                ori = 0; // Dacă avem altceva, ori este setat la 0.
            i++;
        } else { // Dacă caracterul curent este o cifră, intrăm în acest bloc.
            x = 0; // Inițializăm x cu 0 pentru a începe să construim valoarea numerică.
            while (Cifra(s[i])) { // Cât timp caracterul curent este o cifră, intrăm în acest bloc.
                x = x * 10 + s[i] - '0'; // Construim valoarea numerică x.
                i++;
            }
            x *= semn; // Înmulțim x cu semnul corespunzător (+ sau -).
            if (ori == 1)
                v[c] *= x; // Dacă ori este 1, înmulțim ultimul element din v[] cu x.
            else
                v[++c] = x; // Altfel, adăugăm x ca un nou element în v[] la poziția c+1 și incrementăm c.
            semn = 1; // Resetăm semnul la 1 (pozitiv).
            ori = 0;  // Resetăm ori la 0.
        }
    }
    suma = 0; // Inițializăm suma cu 0.
    for (i = 1; i <= c; i++) {
        suma += v[i]; // Calculăm suma tuturor valorilor din v[].
    }
    printf("%lld\n", suma); // Afișăm rezultatul final.
    return 0;
}