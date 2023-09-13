/*#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

ifstream fin("sort_div.in");
ofstream fout("sort_div.out");

struct numar{
    int nr_div, cif_control, prima_cifra, valoare;
} a[10001];

int NumarDivizori (int x) {
    int cnt_div = 0;
    for (int d = 1; d <= sqrt(x); d++) {
        if (x % d == 0) {
            cnt_div++;
            if (d != x / d)
                cnt_div++;
        }
    }
}

int CifraControl (int x) {
    int cifra_control = 0;
    while (x) {
        cifra_control += x % 10;
        x /= 10;
    }
}


int main() {
    int n;
    fin >> n;

}

*/
#include <iostream>

using namespace std;

int cifraControl (int x) {
    if (x < 10)
        return x;
    int sumaCifrelor = 0;
    while (x) {
        sumaCifrelor += x % 10;
        x /= 10;
    }
    return cifraControl(sumaCifrelor);
}

int main() {
    int n;
    cin >> n;
    cout << cifraControl(n);
}
