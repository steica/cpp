#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

ifstream fin("sort_div.in");
ofstream fout("sort_div.out");

struct numar {
    int nr_div, cif_control, prima_cifra, valoare;
} a[10001];

int NumarDivizori(int x) {
    int cnt_div = 0;
    for (int d = 1; d <= sqrt(x); d++) {
        if (x % d == 0) {
            cnt_div++;
            if (d != x / d)
                cnt_div++;
        }
    }
    return cnt_div;
}

int cifraControl(int x) {
    if (x < 10)
        return x;
    int sumaCifrelor = 0;
    while (x) {
        sumaCifrelor += x % 10;
        x /= 10;
    }
    return cifraControl(sumaCifrelor);
}

int primaCifra(int x) {
    while (x > 9)
        x /= 10;
    return x;
}

void citire(numar &n) {
    fin >> n.nr_div >> n.cif_control >> n.prima_cifra >> n.valoare;
}

int comparare (numar a, numar b) {
    if(a.nr_div < b.nr_div)
        return 1;
    else if (a.nr_div == b.nr_div && a.cif_control < b.cif_control)
        return 1;
    else if (a.nr_div == b.nr_div && a.cif_control == b.cif_control && a.prima_cifra < b.prima_cifra)
        return 1;
    else if (a.nr_div == b.nr_div && a.cif_control == b.cif_control && a.prima_cifra == b.prima_cifra && a.valoare < b.valoare)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> a[i].valoare;
        a[i].nr_div = NumarDivizori(a[i].valoare);
        a[i].cif_control = cifraControl(a[i].valoare);
        a[i].prima_cifra = primaCifra(a[i].valoare);
    }
    sort (a + 1, a + n + 1, comparare);
    for (int i = 1; i <= n; i++)
        fout << a[i].valoare << " ";
}


